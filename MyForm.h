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

namespace RobotKinematics {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		double to_double(String^ tekst)
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(tekst);
			double  managed = std::stod(unmanaged);
			return managed;
		};

		int to_int(String^ tekst)
		{
			std::string unmanaged = msclr::interop::marshal_as<std::string>(tekst);
			int  managed = std::stod(unmanaged);
			return managed;
		};

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	public protected: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private:

	private: System::Windows::Forms::TextBox^ L1;
	private: System::Windows::Forms::TextBox^ e;
	public protected:

	public protected:

	private: System::Windows::Forms::TextBox^ d;

	private: System::Windows::Forms::TextBox^ L3;

	private: System::Windows::Forms::TextBox^ L2;
	private: System::Windows::Forms::TextBox^ L4;
	private: System::Windows::Forms::TextBox^ L5;
	private: System::Windows::Forms::TextBox^ L6;

	private: System::Windows::Forms::TextBox^ fi;
	private: System::Windows::Forms::TextBox^ gamma1;
	private: System::Windows::Forms::TextBox^ gamma2;
	private: System::Windows::Forms::TextBox^ gamma3;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	public protected: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private:
	public protected: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ x_end;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ y_end;
	private: System::Windows::Forms::TextBox^ z_end;


	private: System::Windows::Forms::TextBox^ x_start;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ y_start;
	private: System::Windows::Forms::TextBox^ z_start;


	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ steps;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::TextBox^ machine_fi4;
	private: System::Windows::Forms::TextBox^ machine_fi5;


	private: System::Windows::Forms::TextBox^ machine_fi1;

	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ machine_fi2;
	private: System::Windows::Forms::TextBox^ machine_fi3;


	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ xT;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ yT;
	private: System::Windows::Forms::TextBox^ zT;


	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ teta;
	private: System::Windows::Forms::Button^ prev;
	private: System::Windows::Forms::Button^ next;
	private: System::Windows::Forms::TextBox^ current_step;
	private: System::Windows::Forms::Label^ current;
	public protected:




	private:



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series21 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->L1 = (gcnew System::Windows::Forms::TextBox());
			this->e = (gcnew System::Windows::Forms::TextBox());
			this->d = (gcnew System::Windows::Forms::TextBox());
			this->L3 = (gcnew System::Windows::Forms::TextBox());
			this->L2 = (gcnew System::Windows::Forms::TextBox());
			this->L4 = (gcnew System::Windows::Forms::TextBox());
			this->L5 = (gcnew System::Windows::Forms::TextBox());
			this->L6 = (gcnew System::Windows::Forms::TextBox());
			this->fi = (gcnew System::Windows::Forms::TextBox());
			this->gamma1 = (gcnew System::Windows::Forms::TextBox());
			this->gamma2 = (gcnew System::Windows::Forms::TextBox());
			this->gamma3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->teta = (gcnew System::Windows::Forms::TextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->steps = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->x_end = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->y_end = (gcnew System::Windows::Forms::TextBox());
			this->z_end = (gcnew System::Windows::Forms::TextBox());
			this->x_start = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->y_start = (gcnew System::Windows::Forms::TextBox());
			this->z_start = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->machine_fi4 = (gcnew System::Windows::Forms::TextBox());
			this->machine_fi5 = (gcnew System::Windows::Forms::TextBox());
			this->machine_fi1 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->machine_fi2 = (gcnew System::Windows::Forms::TextBox());
			this->machine_fi3 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->xT = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->yT = (gcnew System::Windows::Forms::TextBox());
			this->zT = (gcnew System::Windows::Forms::TextBox());
			this->prev = (gcnew System::Windows::Forms::Button());
			this->next = (gcnew System::Windows::Forms::Button());
			this->current_step = (gcnew System::Windows::Forms::TextBox());
			this->current = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(445, 473);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 68);
			this->button1->TabIndex = 0;
			this->button1->Text = L"GENERATE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"L1[mm]";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"L2[mm]";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"L3[mm]";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"d[mm]";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 138);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"e[mm]";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(130, 34);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"L4[mm]";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(130, 60);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"L5[mm]";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(130, 87);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"L6[mm]";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(144, 113);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 13);
			this->label10->TabIndex = 10;
			this->label10->Text = L"θ[*]";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(142, 139);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(29, 13);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Ψ[*]";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(26, 188);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"δ1[1/-1]";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(93, 188);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"δ2[1/-1]";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(156, 188);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 13);
			this->label14->TabIndex = 14;
			this->label14->Text = L"δ3[1/-1]";
			// 
			// chart3
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea1);
			this->chart3->Location = System::Drawing::Point(260, 22);
			this->chart3->Margin = System::Windows::Forms::Padding(2);
			this->chart3->Name = L"chart3";
			this->chart3->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SemiTransparent;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Name = L"Series2";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Name = L"Series3";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Name = L"Series4";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Name = L"Series5";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Name = L"Series6";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Name = L"Series1";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series7->Name = L"Series7";
			series7->YValuesPerPoint = 2;
			this->chart3->Series->Add(series1);
			this->chart3->Series->Add(series2);
			this->chart3->Series->Add(series3);
			this->chart3->Series->Add(series4);
			this->chart3->Series->Add(series5);
			this->chart3->Series->Add(series6);
			this->chart3->Series->Add(series7);
			this->chart3->Size = System::Drawing::Size(355, 295);
			this->chart3->TabIndex = 15;
			this->chart3->Text = L"chart1";
			// 
			// L1
			// 
			this->L1->Location = System::Drawing::Point(61, 31);
			this->L1->Name = L"L1";
			this->L1->Size = System::Drawing::Size(43, 20);
			this->L1->TabIndex = 16;
			this->L1->Text = L"1000";
			// 
			// e
			// 
			this->e->Location = System::Drawing::Point(61, 136);
			this->e->Name = L"e";
			this->e->Size = System::Drawing::Size(43, 20);
			this->e->TabIndex = 17;
			this->e->Text = L"200";
			// 
			// d
			// 
			this->d->Location = System::Drawing::Point(61, 110);
			this->d->Name = L"d";
			this->d->Size = System::Drawing::Size(43, 20);
			this->d->TabIndex = 18;
			this->d->Text = L"200";
			// 
			// L3
			// 
			this->L3->Location = System::Drawing::Point(61, 84);
			this->L3->Name = L"L3";
			this->L3->Size = System::Drawing::Size(43, 20);
			this->L3->TabIndex = 19;
			this->L3->Text = L"800";
			// 
			// L2
			// 
			this->L2->Location = System::Drawing::Point(61, 58);
			this->L2->Name = L"L2";
			this->L2->Size = System::Drawing::Size(43, 20);
			this->L2->TabIndex = 20;
			this->L2->Text = L"1000";
			// 
			// L4
			// 
			this->L4->Location = System::Drawing::Point(177, 31);
			this->L4->Name = L"L4";
			this->L4->Size = System::Drawing::Size(43, 20);
			this->L4->TabIndex = 21;
			this->L4->Text = L"500";
			// 
			// L5
			// 
			this->L5->Location = System::Drawing::Point(177, 57);
			this->L5->Name = L"L5";
			this->L5->Size = System::Drawing::Size(43, 20);
			this->L5->TabIndex = 22;
			this->L5->Text = L"250";
			// 
			// L6
			// 
			this->L6->Location = System::Drawing::Point(177, 83);
			this->L6->Name = L"L6";
			this->L6->Size = System::Drawing::Size(43, 20);
			this->L6->TabIndex = 23;
			this->L6->Text = L"150";
			// 
			// fi
			// 
			this->fi->Location = System::Drawing::Point(177, 136);
			this->fi->Name = L"fi";
			this->fi->Size = System::Drawing::Size(43, 20);
			this->fi->TabIndex = 25;
			this->fi->Text = L"45";
			// 
			// gamma1
			// 
			this->gamma1->Location = System::Drawing::Point(29, 204);
			this->gamma1->Name = L"gamma1";
			this->gamma1->Size = System::Drawing::Size(43, 20);
			this->gamma1->TabIndex = 26;
			this->gamma1->Text = L"-1";
			// 
			// gamma2
			// 
			this->gamma2->Location = System::Drawing::Point(96, 204);
			this->gamma2->Name = L"gamma2";
			this->gamma2->Size = System::Drawing::Size(43, 20);
			this->gamma2->TabIndex = 27;
			this->gamma2->Text = L"-1";
			// 
			// gamma3
			// 
			this->gamma3->Location = System::Drawing::Point(161, 204);
			this->gamma3->Name = L"gamma3";
			this->gamma3->Size = System::Drawing::Size(43, 20);
			this->gamma3->TabIndex = 28;
			this->gamma3->Text = L"1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->teta);
			this->groupBox1->Controls->Add(this->L1);
			this->groupBox1->Controls->Add(this->gamma3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->gamma2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->gamma1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->fi);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->L6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->L5);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->L4);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->L2);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->L3);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->d);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->e);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox1->Location = System::Drawing::Point(12, 34);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(233, 264);
			this->groupBox1->TabIndex = 29;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Parameters";
			// 
			// teta
			// 
			this->teta->Location = System::Drawing::Point(177, 109);
			this->teta->Name = L"teta";
			this->teta->Size = System::Drawing::Size(43, 20);
			this->teta->TabIndex = 29;
			this->teta->Text = L"30";
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->Location = System::Drawing::Point(636, 334);
			this->chart1->Margin = System::Windows::Forms::Padding(2);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SemiTransparent;
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->Name = L"Series2";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->Name = L"Series3";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series10->Name = L"Series4";
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series11->Name = L"Series5";
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series12->Name = L"Series6";
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series13->Name = L"Series1";
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series14->Name = L"Series7";
			this->chart1->Series->Add(series8);
			this->chart1->Series->Add(series9);
			this->chart1->Series->Add(series10);
			this->chart1->Series->Add(series11);
			this->chart1->Series->Add(series12);
			this->chart1->Series->Add(series13);
			this->chart1->Series->Add(series14);
			this->chart1->Size = System::Drawing::Size(355, 295);
			this->chart1->TabIndex = 30;
			this->chart1->Text = L"chart1";
			this->chart1->TextAntiAliasingQuality = System::Windows::Forms::DataVisualization::Charting::TextAntiAliasingQuality::Normal;
			// 
			// chart2
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
			this->chart2->Location = System::Drawing::Point(636, 22);
			this->chart2->Margin = System::Windows::Forms::Padding(2);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SemiTransparent;
			series15->ChartArea = L"ChartArea1";
			series15->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series15->Name = L"Series2";
			series16->ChartArea = L"ChartArea1";
			series16->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series16->Name = L"Series3";
			series17->ChartArea = L"ChartArea1";
			series17->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series17->Name = L"Series4";
			series18->ChartArea = L"ChartArea1";
			series18->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series18->Name = L"Series5";
			series19->ChartArea = L"ChartArea1";
			series19->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series19->Name = L"Series6";
			series20->ChartArea = L"ChartArea1";
			series20->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series20->Name = L"Series1";
			series21->ChartArea = L"ChartArea1";
			series21->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series21->Name = L"Series7";
			this->chart2->Series->Add(series15);
			this->chart2->Series->Add(series16);
			this->chart2->Series->Add(series17);
			this->chart2->Series->Add(series18);
			this->chart2->Series->Add(series19);
			this->chart2->Series->Add(series20);
			this->chart2->Series->Add(series21);
			this->chart2->Size = System::Drawing::Size(355, 295);
			this->chart2->TabIndex = 31;
			this->chart2->Text = L"chart1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->steps);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->x_end);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->y_end);
			this->groupBox2->Controls->Add(this->z_end);
			this->groupBox2->Controls->Add(this->x_start);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->y_start);
			this->groupBox2->Controls->Add(this->z_start);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox2->Location = System::Drawing::Point(12, 317);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(142, 310);
			this->groupBox2->TabIndex = 33;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Trajectory";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(48, 250);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(39, 13);
			this->label22->TabIndex = 35;
			this->label22->Text = L"Steps";
			// 
			// steps
			// 
			this->steps->Location = System::Drawing::Point(27, 266);
			this->steps->Name = L"steps";
			this->steps->Size = System::Drawing::Size(86, 20);
			this->steps->TabIndex = 36;
			this->steps->Text = L"10";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(24, 30);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(38, 13);
			this->label21->TabIndex = 34;
			this->label21->Text = L"Start:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(23, 138);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(33, 13);
			this->label20->TabIndex = 33;
			this->label20->Text = L"End:";
			// 
			// x_end
			// 
			this->x_end->Location = System::Drawing::Point(70, 154);
			this->x_end->Name = L"x_end";
			this->x_end->Size = System::Drawing::Size(43, 20);
			this->x_end->TabIndex = 30;
			this->x_end->Text = L"800";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(23, 161);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(39, 13);
			this->label17->TabIndex = 27;
			this->label17->Text = L"x[mm]";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(22, 184);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(39, 13);
			this->label18->TabIndex = 28;
			this->label18->Text = L"y[mm]";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(22, 210);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(39, 13);
			this->label19->TabIndex = 29;
			this->label19->Text = L"z[mm]";
			// 
			// y_end
			// 
			this->y_end->Location = System::Drawing::Point(70, 181);
			this->y_end->Name = L"y_end";
			this->y_end->Size = System::Drawing::Size(43, 20);
			this->y_end->TabIndex = 32;
			this->y_end->Text = L"-100";
			// 
			// z_end
			// 
			this->z_end->Location = System::Drawing::Point(70, 207);
			this->z_end->Name = L"z_end";
			this->z_end->Size = System::Drawing::Size(43, 20);
			this->z_end->TabIndex = 31;
			this->z_end->Text = L"1200";
			// 
			// x_start
			// 
			this->x_start->Location = System::Drawing::Point(71, 49);
			this->x_start->Name = L"x_start";
			this->x_start->Size = System::Drawing::Size(43, 20);
			this->x_start->TabIndex = 24;
			this->x_start->Text = L"600";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 21;
			this->label1->Text = L"x[mm]";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(23, 79);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(39, 13);
			this->label15->TabIndex = 22;
			this->label15->Text = L"y[mm]";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(23, 105);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(39, 13);
			this->label16->TabIndex = 23;
			this->label16->Text = L"z[mm]";
			// 
			// y_start
			// 
			this->y_start->Location = System::Drawing::Point(71, 76);
			this->y_start->Name = L"y_start";
			this->y_start->Size = System::Drawing::Size(43, 20);
			this->y_start->TabIndex = 26;
			this->y_start->Text = L"700";
			// 
			// z_start
			// 
			this->z_start->Location = System::Drawing::Point(71, 102);
			this->z_start->Name = L"z_start";
			this->z_start->Size = System::Drawing::Size(43, 20);
			this->z_start->TabIndex = 25;
			this->z_start->Text = L"800";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label33);
			this->groupBox3->Controls->Add(this->label32);
			this->groupBox3->Controls->Add(this->label30);
			this->groupBox3->Controls->Add(this->label31);
			this->groupBox3->Controls->Add(this->machine_fi4);
			this->groupBox3->Controls->Add(this->machine_fi5);
			this->groupBox3->Controls->Add(this->machine_fi1);
			this->groupBox3->Controls->Add(this->label27);
			this->groupBox3->Controls->Add(this->label28);
			this->groupBox3->Controls->Add(this->label29);
			this->groupBox3->Controls->Add(this->machine_fi2);
			this->groupBox3->Controls->Add(this->machine_fi3);
			this->groupBox3->Controls->Add(this->label23);
			this->groupBox3->Controls->Add(this->xT);
			this->groupBox3->Controls->Add(this->label24);
			this->groupBox3->Controls->Add(this->label25);
			this->groupBox3->Controls->Add(this->label26);
			this->groupBox3->Controls->Add(this->yT);
			this->groupBox3->Controls->Add(this->zT);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox3->Location = System::Drawing::Point(184, 382);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(232, 182);
			this->groupBox3->TabIndex = 34;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Results";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(12, 157);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(36, 13);
			this->label33->TabIndex = 53;
			this->label33->Text = L"φ5[*]";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(6, 33);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(126, 13);
			this->label32->TabIndex = 52;
			this->label32->Text = L"Machine Coordinates";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(12, 131);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(36, 13);
			this->label30->TabIndex = 48;
			this->label30->Text = L"φ4[*]";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(12, 157);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(11, 13);
			this->label31->TabIndex = 49;
			this->label31->Text = L" ";
			// 
			// machine_fi4
			// 
			this->machine_fi4->Location = System::Drawing::Point(60, 128);
			this->machine_fi4->Name = L"machine_fi4";
			this->machine_fi4->Size = System::Drawing::Size(43, 20);
			this->machine_fi4->TabIndex = 51;
			// 
			// machine_fi5
			// 
			this->machine_fi5->Location = System::Drawing::Point(60, 154);
			this->machine_fi5->Name = L"machine_fi5";
			this->machine_fi5->Size = System::Drawing::Size(43, 20);
			this->machine_fi5->TabIndex = 50;
			// 
			// machine_fi1
			// 
			this->machine_fi1->Location = System::Drawing::Point(60, 49);
			this->machine_fi1->Name = L"machine_fi1";
			this->machine_fi1->Size = System::Drawing::Size(43, 20);
			this->machine_fi1->TabIndex = 45;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(13, 56);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(36, 13);
			this->label27->TabIndex = 42;
			this->label27->Text = L"φ1[*]";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(12, 79);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(36, 13);
			this->label28->TabIndex = 43;
			this->label28->Text = L"φ2[*]";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(12, 105);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(36, 13);
			this->label29->TabIndex = 44;
			this->label29->Text = L"φ3[*]";
			// 
			// machine_fi2
			// 
			this->machine_fi2->Location = System::Drawing::Point(60, 76);
			this->machine_fi2->Name = L"machine_fi2";
			this->machine_fi2->Size = System::Drawing::Size(43, 20);
			this->machine_fi2->TabIndex = 47;
			// 
			// machine_fi3
			// 
			this->machine_fi3->Location = System::Drawing::Point(60, 102);
			this->machine_fi3->Name = L"machine_fi3";
			this->machine_fi3->Size = System::Drawing::Size(43, 20);
			this->machine_fi3->TabIndex = 46;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(157, 56);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(31, 13);
			this->label23->TabIndex = 41;
			this->label23->Text = L"TCP";
			// 
			// xT
			// 
			this->xT->Location = System::Drawing::Point(179, 75);
			this->xT->Name = L"xT";
			this->xT->Size = System::Drawing::Size(43, 20);
			this->xT->TabIndex = 38;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(132, 82);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(47, 13);
			this->label24->TabIndex = 35;
			this->label24->Text = L"xT[mm]";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(131, 105);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(47, 13);
			this->label25->TabIndex = 36;
			this->label25->Text = L"yT[mm]";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(131, 131);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(47, 13);
			this->label26->TabIndex = 37;
			this->label26->Text = L"zT[mm]";
			// 
			// yT
			// 
			this->yT->Location = System::Drawing::Point(179, 102);
			this->yT->Name = L"yT";
			this->yT->Size = System::Drawing::Size(43, 20);
			this->yT->TabIndex = 40;
			// 
			// zT
			// 
			this->zT->Location = System::Drawing::Point(179, 128);
			this->zT->Name = L"zT";
			this->zT->Size = System::Drawing::Size(43, 20);
			this->zT->TabIndex = 39;
			// 
			// prev
			// 
			this->prev->Location = System::Drawing::Point(443, 382);
			this->prev->Name = L"prev";
			this->prev->Size = System::Drawing::Size(51, 23);
			this->prev->TabIndex = 36;
			this->prev->Text = L"Prev";
			this->prev->UseVisualStyleBackColor = true;
			this->prev->Click += gcnew System::EventHandler(this, &MyForm::prev_Click);
			// 
			// next
			// 
			this->next->Location = System::Drawing::Point(522, 382);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(51, 23);
			this->next->TabIndex = 37;
			this->next->Text = L"Next";
			this->next->UseVisualStyleBackColor = true;
			this->next->Click += gcnew System::EventHandler(this, &MyForm::next_Click);
			// 
			// current_step
			// 
			this->current_step->Location = System::Drawing::Point(501, 415);
			this->current_step->Name = L"current_step";
			this->current_step->Size = System::Drawing::Size(38, 20);
			this->current_step->TabIndex = 38;
			this->current_step->Text = L"0";
			// 
			// current
			// 
			this->current->AutoSize = true;
			this->current->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->current->Location = System::Drawing::Point(443, 418);
			this->current->Name = L"current";
			this->current->Size = System::Drawing::Size(52, 13);
			this->current->TabIndex = 39;
			this->current->Text = L"Current:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1006, 639);
			this->Controls->Add(this->current);
			this->Controls->Add(this->current_step);
			this->Controls->Add(this->next);
			this->Controls->Add(this->prev);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L" ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//Wyczyszczenie wykresów
		chart1->Series["Series1"]->Points->Clear();
		chart1->Series["Series2"]->Points->Clear();
		chart1->Series["Series3"]->Points->Clear();
		chart1->Series["Series4"]->Points->Clear();
		chart1->Series["Series5"]->Points->Clear();
		chart1->Series["Series6"]->Points->Clear();
		chart1->Series["Series7"]->Points->Clear();

		chart2->Series["Series1"]->Points->Clear();
		chart2->Series["Series2"]->Points->Clear();
		chart2->Series["Series3"]->Points->Clear();
		chart2->Series["Series4"]->Points->Clear();
		chart2->Series["Series5"]->Points->Clear();
		chart2->Series["Series6"]->Points->Clear();
		chart2->Series["Series7"]->Points->Clear();

		chart3->Series["Series1"]->Points->Clear();
		chart3->Series["Series2"]->Points->Clear();
		chart3->Series["Series3"]->Points->Clear();
		chart3->Series["Series4"]->Points->Clear();
		chart3->Series["Series5"]->Points->Clear();
		chart3->Series["Series6"]->Points->Clear();
		chart3->Series["Series7"]->Points->Clear();

		//Zebranie danych z GUI
		double L1 = to_double(this->L1->Text);
		double L2 = to_double(this->L2->Text);
		double L3 = to_double(this->L3->Text);
		double L4 = to_double(this->L4->Text);
		double L5 = to_double(this->L5->Text);
		double L6 = to_double(this->L6->Text);
		double d = to_double(this->d->Text);
		double ee = to_double(this->e->Text);
		double teta = to_double(this->teta->Text);
		double fi = to_double(this->fi->Text);
		double gamma1 = to_double(this->gamma1->Text);
		double gamma2 = to_double(this->gamma2->Text);
		double gamma3 = to_double(this->gamma3->Text);
		double x_start = to_double(this->x_start->Text);
		double y_start = to_double(this->y_start->Text);
		double z_start = to_double(this->z_start->Text);
		double x_end = to_double(this->x_end->Text);
		double y_end = to_double(this->y_end->Text);
		double z_end = to_double(this->z_end->Text);
		int steps = to_int(this->steps->Text);
		double L = L5 + L6;
		int current_step = to_int(this->current_step->Text);

		if (steps < current_step)
		{
			String^ current = L"0";
			this->current_step->Text = current;
			current_step = to_int(this->current_step->Text);
		};

		//sin and cos
		double teta_radians = teta * M_PI / 180.0;
		double fi_radians = fi * M_PI / 180.0;
		double cos_value_teta = std::cos(teta_radians); // obliczenie cosinusa
		double sin_value_teta = std::sin(teta_radians); // obliczenie sinusa
		double cos_value_fi = std::cos(fi_radians); // obliczenie cosinusa
		double sin_value_fi = std::sin(fi_radians); // obliczenie sinusa

		//Lokacja pamieci dla punktow ruchu
		Position* pose = new Position[steps + 1];
		double* fi1 = new double[steps + 1];
		double* fi2 = new double[steps + 1];
		double* fi3 = new double[steps + 1];
		double* fi4 = new double[steps + 1];
		double* fi5 = new double[steps + 1];

		//Move
		double x_m, y_m, z_m;
		x_m = (x_end - x_start) / (steps);
		y_m = (y_end - y_start) / (steps);
		z_m = (z_end - z_start) / (steps);

		//Punkt1
		double x1, y1, z1;
		//Pętla animacji
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
			double cos_value1 = (1 / ((x_p * x_p) + (y_p * y_p))) * (-ee * y_p + gamma1 * x_p * sqrt(x_p * x_p + y_p * y_p - ee * ee));
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
				MessageBox::Show("Error with calculations", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
				break;
			};

			//point02
			pose[i].x.p02 = pose[i].x.p01 + L2 * cos_value2 * cos_value1;
			pose[i].y.p02 = pose[i].y.p01 + L2 * cos_value2 * sin_value1;
			pose[i].z.p02 = L2 * sin_value2;

			if (isnan(pose[i].x.p02) || isnan(pose[i].y.p02) || isnan(pose[i].z.p02)) {
				MessageBox::Show("Error with calculations", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
				break;
			};

			//point0_2
			pose[i].x.p0_2 = pose[i].x.p02 - (d - ee) * sin_value1;
			pose[i].y.p0_2 = pose[i].y.p02 + (d - ee) * cos_value1;
			pose[i].z.p0_2 = pose[i].z.p02;

			if (isnan(pose[i].x.p0_2) || isnan(pose[i].y.p0_2) || isnan(pose[i].z.p0_2)) {
				MessageBox::Show("Error with calculations", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
				break;
			};

			//point02
			pose[i].x.p_r = pose[i].x.p0_2 + L3 * cos_value1 * cos_value23;
			pose[i].y.p_r = pose[i].y.p0_2 + L3 * sin_value1 * cos_value23;
			pose[i].z.p_r = pose[i].z.p0_2 + L3 * sin_value23;

			if (isnan(pose[i].x.p_r) || isnan(pose[i].y.p_r) || isnan(pose[i].z.p_r)) {
				MessageBox::Show("Error with calculations", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
				break;
			};

			//point_p
			pose[i].x.p_p = pose[i].x.p_r + L4 * cos_value1 * cos_value234;
			pose[i].y.p_p = pose[i].y.p_r + L4 * sin_value1 * cos_value234;
			pose[i].z.p_p = pose[i].z.p_r + L4 * sin_value234;

			if (isnan(pose[i].x.p_p) || isnan(pose[i].y.p_p) || isnan(pose[i].z.p_p)) {
				MessageBox::Show("Error with calculations", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
				break;
			};

			//pointp
			pose[i].x.p_t = pose[i].x.p_p + L * cos_value_teta * cos_value_fi;
			pose[i].y.p_t = pose[i].y.p_p + L * cos_value_teta * sin_value_fi;
			pose[i].z.p_t = pose[i].z.p_p + L * sin_value_fi;

			if (isnan(pose[i].x.p_t) || isnan(pose[i].y.p_t) || isnan(pose[i].z.p_t)) {
				MessageBox::Show("Error with calculations", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
				break;
			};
		};

		////Displaying TCP value
		String^ xt = System::Convert::ToString(pose[current_step].x.p_t);
		this->xT->Text = xt;
		String^ yt = System::Convert::ToString(pose[current_step].y.p_t);
		this->yT->Text = yt;
		String^ zt = System::Convert::ToString(pose[current_step].z.p_t);
		this->zT->Text = zt;

		//Displaying Machine coordinates
		String^ phi1 = System::Convert::ToString(fi1[current_step]);
		machine_fi1->Text = phi1;
		String^ phi2 = System::Convert::ToString(fi2[current_step]);
		machine_fi2->Text = phi2;
		String^ phi3 = System::Convert::ToString(fi3[current_step]);
		machine_fi3->Text = phi3;
		String^ phi4 = System::Convert::ToString(fi4[current_step]);
		machine_fi4->Text = phi4;
		String^ phi5 = System::Convert::ToString(fi5[current_step]);
		machine_fi5->Text = phi5;

		//Wykres XY/////////////////////////////////////////////////////////////////////
		// /////////////////////////////////////////////////////////////////////////////
		// ustaw zakre osi
		chart1->ChartAreas[0]->AxisX->Title = "X";
		chart1->ChartAreas[0]->AxisY->Title = "Y";
		chart1->ChartAreas[0]->AxisX->Minimum = -(L2 + L3 + L4 + L);
		chart1->ChartAreas[0]->AxisX->Maximum = (L2 + L3 + L4 + L);
		chart1->ChartAreas[0]->AxisY->Minimum = -(L2 + L3 + L4 + L);
		chart1->ChartAreas[0]->AxisY->Maximum = (L2 + L3 + L4 + L);
		chart1->ChartAreas[0]->AxisX->Interval = (L2 + L3 + L4 + L) / 2;
		chart1->ChartAreas[0]->AxisY->Interval = (L2 + L3 + L4 + L) / 2;

		// ustaw marginesy wyświetlania
		chart1->ChartAreas[0]->InnerPlotPosition->Auto = false;
		chart1->ChartAreas[0]->InnerPlotPosition->Width = 70;
		chart1->ChartAreas[0]->InnerPlotPosition->Height = 70;
		chart1->ChartAreas[0]->InnerPlotPosition->X = 20;
		chart1->ChartAreas[0]->InnerPlotPosition->Y = 10;

		// usuń siatkę
		chart1->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
		chart1->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;

		//dodawanie ramion
		//ramie 1
		chart1->Series["Series1"]->Points->AddXY(x1, y1);
		chart1->Series["Series1"]->Points->AddXY(pose[current_step].x.p01, pose[current_step].y.p01);
		//ramie 2
		chart1->Series["Series2"]->Points->AddXY(pose[current_step].x.p01, pose[current_step].y.p01);
		chart1->Series["Series2"]->Points->AddXY(pose[current_step].x.p02, pose[current_step].y.p02);
		//ramie 3
		chart1->Series["Series3"]->Points->AddXY(pose[current_step].x.p02, pose[current_step].y.p02);
		chart1->Series["Series3"]->Points->AddXY(pose[current_step].x.p0_2, pose[current_step].y.p0_2);
		//ramie 4
		chart1->Series["Series4"]->Points->AddXY(pose[current_step].x.p0_2, pose[current_step].y.p0_2);
		chart1->Series["Series4"]->Points->AddXY(pose[current_step].x.p_r, pose[current_step].y.p_r);
		//ramie 5
		chart1->Series["Series5"]->Points->AddXY(pose[current_step].x.p_r, pose[current_step].y.p_r);
		chart1->Series["Series5"]->Points->AddXY(pose[current_step].x.p_p, pose[current_step].y.p_p);
		//ramie 6
		chart1->Series["Series6"]->Points->AddXY(pose[current_step].x.p_p, pose[current_step].y.p_p);
		chart1->Series["Series6"]->Points->AddXY(pose[current_step].x.p_t, pose[current_step].y.p_t);
		chart1->Series["Series7"]->Points->AddXY(pose[current_step].x.p_t, pose[current_step].y.p_t);

		//Wykres XZ/////////////////////////////////////////////////////////////////////
		// /////////////////////////////////////////////////////////////////////////////
		// ustaw zakre osi
		chart2->ChartAreas[0]->AxisX->Title = "X";
		chart2->ChartAreas[0]->AxisY->Title = "Z";
		chart2->ChartAreas[0]->AxisX->Minimum = -(L2 + L3 + L4 + L);
		chart2->ChartAreas[0]->AxisX->Maximum = (L2 + L3 + L4 + L);
		chart2->ChartAreas[0]->AxisY->Minimum = -(L2 + L3 + L4 + L);
		chart2->ChartAreas[0]->AxisY->Maximum = (L2 + L3 + L4 + L);
		chart2->ChartAreas[0]->AxisX->Interval = (L2 + L3 + L4 + L) / 2;
		chart2->ChartAreas[0]->AxisY->Interval = (L2 + L3 + L4 + L) / 2;

		// ustaw marginesy wyświetlania
		chart2->ChartAreas[0]->InnerPlotPosition->Auto = false;
		chart2->ChartAreas[0]->InnerPlotPosition->Width = 70;
		chart2->ChartAreas[0]->InnerPlotPosition->Height = 70;
		chart2->ChartAreas[0]->InnerPlotPosition->X = 20;
		chart2->ChartAreas[0]->InnerPlotPosition->Y = 10;

		// usuń siatkę
		chart2->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
		chart2->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;

		//dodawanie ramion
		//ramie 1
		chart2->Series["Series1"]->Points->AddXY(x1, z1);
		chart2->Series["Series1"]->Points->AddXY(pose[current_step].x.p01, pose[current_step].z.p01);
		//ramie 2
		chart2->Series["Series2"]->Points->AddXY(pose[current_step].x.p01, pose[current_step].z.p01);
		chart2->Series["Series2"]->Points->AddXY(pose[current_step].x.p02, pose[current_step].z.p02);
		//ramie 3
		chart2->Series["Series3"]->Points->AddXY(pose[current_step].x.p02, pose[current_step].z.p02);
		chart2->Series["Series3"]->Points->AddXY(pose[current_step].x.p0_2, pose[current_step].z.p0_2);
		//ramie 4
		chart2->Series["Series4"]->Points->AddXY(pose[current_step].x.p0_2, pose[current_step].z.p0_2);
		chart2->Series["Series4"]->Points->AddXY(pose[current_step].x.p_r, pose[current_step].z.p_r);
		//ramie 5
		chart2->Series["Series5"]->Points->AddXY(pose[current_step].x.p_r, pose[current_step].z.p_r);
		chart2->Series["Series5"]->Points->AddXY(pose[current_step].x.p_p, pose[current_step].z.p_p);
		//ramie 6
		chart2->Series["Series6"]->Points->AddXY(pose[current_step].x.p_p, pose[current_step].z.p_p);
		chart2->Series["Series6"]->Points->AddXY(pose[current_step].x.p_t, pose[current_step].z.p_t);
		chart2->Series["Series7"]->Points->AddXY(pose[current_step].x.p_t, pose[current_step].z.p_t);

		//Wykres YZ/////////////////////////////////////////////////////////////////////
		// /////////////////////////////////////////////////////////////////////////////
		// ustaw zakre osi
		chart3->ChartAreas[0]->AxisX->Title = "Y";
		chart3->ChartAreas[0]->AxisY->Title = "Z";
		chart3->ChartAreas[0]->AxisX->Minimum = -(L2 + L3 + L4 + L);
		chart3->ChartAreas[0]->AxisX->Maximum = (L2 + L3 + L4 + L);
		chart3->ChartAreas[0]->AxisY->Minimum = -(L2 + L3 + L4 + L);
		chart3->ChartAreas[0]->AxisY->Maximum = (L2 + L3 + L4 + L);
		chart3->ChartAreas[0]->AxisX->Interval = (L2 + L3 + L4 + L) / 2;
		chart3->ChartAreas[0]->AxisY->Interval = (L2 + L3 + L4 + L) / 2;

		// ustaw marginesy wyświetlania
		chart3->ChartAreas[0]->InnerPlotPosition->Auto = false;
		chart3->ChartAreas[0]->InnerPlotPosition->Width = 70;
		chart3->ChartAreas[0]->InnerPlotPosition->Height = 70;
		chart3->ChartAreas[0]->InnerPlotPosition->X = 20;
		chart3->ChartAreas[0]->InnerPlotPosition->Y = 10;

		// usuń siatkę
		chart3->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
		chart3->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;

		//dodawanie ramion
		//ramie 1
		chart3->Series["Series1"]->Points->AddXY(y1, z1);
		chart3->Series["Series1"]->Points->AddXY(pose[current_step].y.p01, pose[current_step].z.p01);
		//ramie 2
		chart3->Series["Series2"]->Points->AddXY(pose[current_step].y.p01, pose[current_step].z.p01);
		chart3->Series["Series2"]->Points->AddXY(pose[current_step].y.p02, pose[current_step].z.p02);
		//ramie 3
		chart3->Series["Series3"]->Points->AddXY(pose[current_step].y.p02, pose[current_step].z.p02);
		chart3->Series["Series3"]->Points->AddXY(pose[current_step].y.p0_2, pose[current_step].z.p0_2);
		//ramie 4
		chart3->Series["Series4"]->Points->AddXY(pose[current_step].y.p0_2, pose[current_step].z.p0_2);
		chart3->Series["Series4"]->Points->AddXY(pose[current_step].y.p_r, pose[current_step].z.p_r);
		//ramie 5
		chart3->Series["Series5"]->Points->AddXY(pose[current_step].y.p_r, pose[current_step].z.p_r);
		chart3->Series["Series5"]->Points->AddXY(pose[current_step].y.p_p, pose[current_step].z.p_p);
		//ramie 6
		chart3->Series["Series6"]->Points->AddXY(pose[current_step].y.p_p, pose[current_step].z.p_p);
		chart3->Series["Series6"]->Points->AddXY(pose[current_step].x.p_t, pose[current_step].z.p_t);
		chart3->Series["Series7"]->Points->AddXY(pose[current_step].x.p_t, pose[current_step].z.p_t);

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

	private: System::Void next_Click(System::Object^ sender, System::EventArgs^ e) {

		int steps = to_int(this->steps->Text);
		int current_step = to_int(this->current_step->Text);

		if (current_step < steps)
		{
			current_step++;
		}
		else
		{
			MessageBox::Show("No more positions generated", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
		};

		String^ current = System::Convert::ToString(current_step);
		this->current_step->Text = current;
	}

	private: System::Void prev_Click(System::Object^ sender, System::EventArgs^ e) {

		int steps = to_int(this->steps->Text);
		int current_step = to_int(this->current_step->Text);

		if (current_step > 0)
		{
			current_step--;
		}
		else
		{
			MessageBox::Show("Number can't be less than 0", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);
		};

		String^ current = System::Convert::ToString(current_step);
		this->current_step->Text = current;
	}
};
};
