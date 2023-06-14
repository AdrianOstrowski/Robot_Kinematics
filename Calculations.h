#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include <numeric>
#include <algorithm>
#include <vector>
#include <cmath>

#define M_PI 3.14159265358979323846

//Struktury do animacji
struct Axi {
	double p01, p02, p0_2, p_r, p_p, p_t;
};
struct Position {
	Axi x;
	Axi y;
	Axi z;
};

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

class Calculations
{
private:
	double L1, L2, L3, L4, L5, L6, L, ee, d, teta, fi, gamma1, gamma2, gamma3, x_start, y_start, z_start, x_end, y_end, z_end;
	int steps, current_step;
	Position* pose;
	double* fi1;
	double* fi2;
	double* fi3;
	double* fi4;
	double* fi5;
	double plot_range;
	double x1, y1, z1;

public:
	Calculations(String^ L1, String^ L2, String^ L3, String^ L4, String^ L5, String^ L6, String^ d, String^ e, String^ teta, String^ fi, String^ gamma1, String^ gamma2, String^ gamma3, String^ x_start, String^ y_start, String^ z_start, String^ x_end, String^ y_end, String^ z_end, String^ steps, String^ current_step);
	~Calculations();
	double to_double(String^);
	int to_int(String^);
	void calculate();
	double get_plot_range();
	Position get_pose();
	int change_step(int);
	int get_x();
	int get_y();
	int get_z();
	double get_fi1(int step);
	double get_fi2(int step);
	double get_fi3(int step);
	double get_fi4(int step);
	double get_fi5(int step);
};

