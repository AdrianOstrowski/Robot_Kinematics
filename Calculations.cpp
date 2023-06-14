#include "Calculations.h"

Calculations::Calculations(String^ L1, String^ L2, String^ L3, String^ L4, String^ L5, String^ L6, String^ d, String^ e, String^ teta, String^ fi, String^ gamma1, String^ gamma2, String^ gamma3, String^ x_start, String^ y_start, String^ z_start, String^ x_end, String^ y_end, String^ z_end, String^ steps, String^ current_step)
{
	//Zebranie danych z GUI
	this->L1 = to_double(L1);
	if (this->L1 <= 0) {
		MessageBox::Show("Value L1 can't be less than 0", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	this->L2 = to_double(L2);
	if (this->L2 <= 0) {
		MessageBox::Show("Value L2 can't be less than 0", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	this->L3 = to_double(L3);
	if (this->L3 <= 0) {
		MessageBox::Show("Value L3 can't be less than 0", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	this->L4 = to_double(L4);
	if (this->L4 <= 0) {
		MessageBox::Show("Value L4 can't be less than 0", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	this->L5 = to_double(L5);
	if (this->L5 <= 0) {
		MessageBox::Show("Value L5 can't be less than 0", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	this->L6 = to_double(L6);
	if (this->L6 <= 0) {
		MessageBox::Show("Value L6 can't be less than 0", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	this->d = to_double(d);
	if (this->d <= 0) {
		MessageBox::Show("Value d can't be less than 0", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	this->ee = to_double(e);
	if (this->ee <= 0) {
		MessageBox::Show("Value e can't be less than 0", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	this->teta = to_double(teta);
	if (this->teta <= 0) {
		MessageBox::Show("Value teta can't be less than 0", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	this->fi = to_double(fi);
	if (this->fi <= 0) {
		MessageBox::Show("Value fi can't be less than 0", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	this->gamma1 = to_double(gamma1);
	this->gamma2 = to_double(gamma2);
	this->gamma3 = to_double(gamma3);
	this->x_start = to_double(x_start);
	this->y_start = to_double(y_start);
	this->z_start = to_double(z_start);
	this->x_end = to_double(x_end);
	this->y_end = to_double(y_end);
	this->z_end = to_double(z_end);
	this->steps = to_int(steps);
	if (this->steps <= 0) {
		MessageBox::Show("Value of steps can't be less than 0", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	this->L = this->L5 + this->L6;
	if (this->L <= 0) {
		MessageBox::Show("Value L can't be less than 0", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	this->current_step = to_int(current_step);
	//Lokacja pamieci dla punktow ruchu
	this->pose = new Position[this->steps + 1];
	this->fi1 = new double[this->steps + 1];
	this->fi2 = new double[this->steps + 1];
	this->fi3 = new double[this->steps + 1];
	this->fi4 = new double[this->steps + 1];
	this->fi5 = new double[this->steps + 1];
	this->plot_range = this->L2 + this->L3 + this->L4 + this->L;
}

Calculations::~Calculations()
{
	delete[] pose;
	pose = NULL;
	delete[] fi1;
	fi1 = NULL;
	delete[] fi2;
	fi2 = NULL;
	delete[] fi3;
	fi3 = NULL;
	delete[] fi4;
	fi4 = NULL;
	delete[] fi5;
	fi5 = NULL;
}

double Calculations::to_double(String^ tekst)
{
	std::string unmanaged = msclr::interop::marshal_as<std::string>(tekst);
	double  managed = std::stod(unmanaged);
	return managed;
}

int Calculations::to_int(String^ tekst)
{
	std::string unmanaged = msclr::interop::marshal_as<std::string>(tekst);
	int  managed = std::stod(unmanaged);
	return managed;
}

void Calculations::calculate()
{
	//sin and cos
	double teta_radians = teta * M_PI / 180.0;
	double fi_radians = fi * M_PI / 180.0;
	double cos_value_teta = std::cos(teta_radians); // obliczenie cosinusa
	double sin_value_teta = std::sin(teta_radians); // obliczenie sinusa
	double cos_value_fi = std::cos(fi_radians); // obliczenie cosinusa
	double sin_value_fi = std::sin(fi_radians); // obliczenie sinusa

	//Move
	double x_m, y_m, z_m;
	x_m = (x_end - x_start) / (steps);
	y_m = (y_end - y_start) / (steps);
	z_m = (z_end - z_start) / (steps);

	//Pêtla animacji
	for (int i = 0; i <= steps; i++)
	{
		//Sekwencja obliczeniowa dla kinematyki odwrotnej
//1
		double x_t = x_start + i * x_m;
		double y_t = y_start + i * y_m;
		double z_t = z_start + i * z_m;
		//2
		double x_p = x_t - L * cos_value_teta * cos_value_fi;
		double y_p = y_t - L * cos_value_teta * sin_value_fi;
		double z_p = z_t - L * sin_value_fi;
		//3,4
		double sin_value1 = (1 / ((x_p * x_p) + (y_p * y_p))) * (ee * x_p + gamma1 * y_p * sqrt(x_p * x_p + y_p * y_p - ee * ee));
		double cos_value1 = (1 / ((x_p * x_p) + (y_p * y_p))) * (-ee* y_p + gamma1 * x_p * sqrt(x_p * x_p + y_p * y_p - ee * ee));
		fi1[i] = asin(sin_value1) * 180.0 / M_PI;
		//5,6
		double sin_value5 = cos_value_teta * (sin_value_fi * cos_value1 - cos_value_fi * sin_value1);
		double cos_value5 = gamma3 * sqrt(1 - sin_value5 * sin_value5);
		fi5[i] = asin(sin_value5) * 180.0 / M_PI;
		//7
		double sin_value234 = sin_value_teta / cos_value5;
		double cos_value234 = cos_value_teta / cos_value5 * (cos_value_fi * cos_value1 + sin_value_fi * sin_value1);
		double fi234_r = asin(sin_value234);
		double fi234 = fi234_r * 180.0 / M_PI;
		//8
		double x_r = x_p - L4 * cos_value1 * cos_value234;
		double y_r = y_p - L4 * sin_value1 * cos_value234;
		double z_r = z_p - L4 * sin_value234;
		//9
		double a = -L1 + gamma1 * sqrt(x_r * x_r + y_r * y_r - ee * ee);
		double b = (1 / (2 * L2)) * (a * a + z_r * z_r + L2 * L2 - L3 * L3);
		//10,11
		double sin_value2 = (1 / (a * a + z_r * z_r)) * (z_r * b + gamma2 * a * sqrt(a * a + z_r * z_r - b * b));
		double cos_value2 = (1 / (a * a + z_r * z_r)) * (a * b - gamma2 * z_r * sqrt(a * a + z_r * z_r - b * b));
		fi2[i] = asin(sin_value2) * 180.0 / M_PI;
		//12
		double sin_value3 = (gamma2 / L3) * sqrt(a * a + z_r * z_r - b * b);
		double cos_value3 = (b - L2) / L3;
		fi3[i] = asin(sin_value3) * 180.0 / M_PI;
		//13
		double sin_value23 = (1 / L3) * (z_r - (L2 / (a * a + z_r * z_r) * (z_r * b + gamma2 * a * sqrt(a * a + z_r * z_r - b * b))));
		double cos_value23 = (1 / L3) * (a - ((L2 / (a * a + z_r * z_r)) * (a * b - gamma2 * z_r * sqrt(a * a + z_r * z_r - b * b))));
		double fi23_r = asin(sin_value23);
		double fi23 = fi23_r * 180.0 / M_PI;
		//14
		double sin_value4 = sin_value234 * cos_value23 - cos_value234 * sin_value23;
		double cos_value4 = cos_value234 * cos_value23 + sin_value234 * sin_value23;
		fi4[i] = asin(sin_value4) * 180.0 / M_PI;


		//Punkt1
		x1 = L1 * cos_value1;
		y1 = L1 * sin_value1;
		z1 = 0;

		//point01
		pose[i].x.p01 = x1 + d * sin_value1;
		pose[i].y.p01 = y1 - d * cos_value1;
		pose[i].z.p01 = 0;

		if (isnan(pose[i].x.p01) || isnan(pose[i].y.p01) || isnan(pose[i].z.p01)) {
			MessageBox::Show("Error with calculations point01", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			break;
		};

		//point02
		pose[i].x.p02 = pose[i].x.p01 + L2 * cos_value2 * cos_value1;
		pose[i].y.p02 = pose[i].y.p01 + L2 * cos_value2 * sin_value1;
		pose[i].z.p02 = L2 * sin_value2;

		if (isnan(pose[i].x.p02) || isnan(pose[i].y.p02) || isnan(pose[i].z.p02)) {
			MessageBox::Show("Error with calculations point02", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			break;
		};

		//point0_2
		pose[i].x.p0_2 = pose[i].x.p02 - (d - ee) * sin_value1;
		pose[i].y.p0_2 = pose[i].y.p02 + (d - ee) * cos_value1;
		pose[i].z.p0_2 = pose[i].z.p02;

		if (isnan(pose[i].x.p0_2) || isnan(pose[i].y.p0_2) || isnan(pose[i].z.p0_2)) {
			MessageBox::Show("Error with calculations point0_2", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			break;
		};

		//point02
		pose[i].x.p_r = pose[i].x.p0_2 + L3 * cos_value1 * cos_value23;
		pose[i].y.p_r = pose[i].y.p0_2 + L3 * sin_value1 * cos_value23;
		pose[i].z.p_r = pose[i].z.p0_2 + L3 * sin_value23;

		if (isnan(pose[i].x.p_r) || isnan(pose[i].y.p_r) || isnan(pose[i].z.p_r)) {
			MessageBox::Show("Error with calculations point_r", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			break;
		};

		//point_p
		pose[i].x.p_p = pose[i].x.p_r + L4 * cos_value1 * cos_value234;
		pose[i].y.p_p = pose[i].y.p_r + L4 * sin_value1 * cos_value234;
		pose[i].z.p_p = pose[i].z.p_r + L4 * sin_value234;

		if (isnan(pose[i].x.p_p) || isnan(pose[i].y.p_p) || isnan(pose[i].z.p_p)) {
			MessageBox::Show("Error with calculations point_p", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			break;
		};

		//pointp
		pose[i].x.p_t = pose[i].x.p_p + L * cos_value_teta * cos_value_fi;
		pose[i].y.p_t = pose[i].y.p_p + L * cos_value_teta * sin_value_fi;
		pose[i].z.p_t = pose[i].z.p_p + L * sin_value_fi;

		if (isnan(pose[i].x.p_t) || isnan(pose[i].y.p_t) || isnan(pose[i].z.p_t)) {
			MessageBox::Show("Error with calculations point_t", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
			break;
		};
	};
}

double Calculations::get_plot_range()
{
	return this->plot_range;
}

Position Calculations::get_pose()
{
	return this->pose[this->current_step];
}

int Calculations::change_step(int current_step)
{
	this->current_step = current_step;
	return this->current_step;
}

int Calculations::get_x()
{
	return this->x1;
};
int Calculations::get_y() 
{
	return this->y1;
};
int Calculations::get_z()
{
	return this->z1;
};
double Calculations::get_fi1(int step)
{
	return this->fi1[step];
};
double Calculations::get_fi2(int step)
{
	return this->fi2[step];
};
double Calculations::get_fi3(int step)
{
	return this->fi3[step];
};
double Calculations::get_fi4(int step)
{
	return this->fi4[step];
};
double Calculations::get_fi5(int step)
{
	return this->fi5[step];
};