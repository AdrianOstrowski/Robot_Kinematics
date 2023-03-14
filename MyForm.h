#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include <numeric>
#include <algorithm>
#include <vector>
#include <cmath>

#define M_PI 3.14159265358979323846

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
	public protected: System::Windows::Forms::DataVisualization::Charting::Chart^ View;
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
	public protected: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
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
	public protected:




	private:



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			this->View = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
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
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
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
			this->button1->Location = System::Drawing::Point(272, 348);
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
			// View
			// 
			chartArea1->Name = L"ChartArea1";
			this->View->ChartAreas->Add(chartArea1);
			this->View->Location = System::Drawing::Point(420, 263);
			this->View->Name = L"View";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Name = L"Series1";
			series1->YValuesPerPoint = 4;
			this->View->Series->Add(series1);
			this->View->Size = System::Drawing::Size(288, 237);
			this->View->TabIndex = 15;
			this->View->Text = L"chart1";
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
			this->e->Text = L"5";
			// 
			// d
			// 
			this->d->Location = System::Drawing::Point(61, 110);
			this->d->Name = L"d";
			this->d->Size = System::Drawing::Size(43, 20);
			this->d->TabIndex = 18;
			this->d->Text = L"10";
			// 
			// L3
			// 
			this->L3->Location = System::Drawing::Point(61, 84);
			this->L3->Name = L"L3";
			this->L3->Size = System::Drawing::Size(43, 20);
			this->L3->TabIndex = 19;
			this->L3->Text = L"600";
			// 
			// L2
			// 
			this->L2->Location = System::Drawing::Point(61, 58);
			this->L2->Name = L"L2";
			this->L2->Size = System::Drawing::Size(43, 20);
			this->L2->TabIndex = 20;
			this->L2->Text = L"800";
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
			this->L5->Text = L"400";
			// 
			// L6
			// 
			this->L6->Location = System::Drawing::Point(177, 83);
			this->L6->Name = L"L6";
			this->L6->Size = System::Drawing::Size(43, 20);
			this->L6->TabIndex = 23;
			this->L6->Text = L"300";
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
			this->gamma1->Text = L"1";
			// 
			// gamma2
			// 
			this->gamma2->Location = System::Drawing::Point(96, 204);
			this->gamma2->Name = L"gamma2";
			this->gamma2->Size = System::Drawing::Size(43, 20);
			this->gamma2->TabIndex = 27;
			this->gamma2->Text = L"1";
			// 
			// gamma3
			// 
			this->gamma3->Location = System::Drawing::Point(161, 204);
			this->gamma3->Name = L"gamma3";
			this->gamma3->Size = System::Drawing::Size(43, 20);
			this->gamma3->TabIndex = 28;
			this->gamma3->Text = L"-1";
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
			this->groupBox1->Location = System::Drawing::Point(12, 12);
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
			this->teta->Text = L"60";
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->Location = System::Drawing::Point(714, 263);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Name = L"Series1";
			series2->YValuesPerPoint = 4;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Name = L"Series2";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Name = L"Series3";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Name = L"Series4";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Name = L"Series5";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series7->Name = L"Series6";
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Series->Add(series7);
			this->chart1->Size = System::Drawing::Size(288, 237);
			this->chart1->TabIndex = 30;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
			this->chart2->Location = System::Drawing::Point(714, 20);
			this->chart2->Name = L"chart2";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->Name = L"Series1";
			series8->YValuesPerPoint = 4;
			this->chart2->Series->Add(series8);
			this->chart2->Size = System::Drawing::Size(288, 237);
			this->chart2->TabIndex = 31;
			this->chart2->Text = L"chart1";
			// 
			// chart3
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea4);
			this->chart3->Location = System::Drawing::Point(420, 20);
			this->chart3->Name = L"chart3";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->Name = L"Series1";
			series9->YValuesPerPoint = 4;
			this->chart3->Series->Add(series9);
			this->chart3->Size = System::Drawing::Size(288, 237);
			this->chart3->TabIndex = 32;
			this->chart3->Text = L"chart1";
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
			this->groupBox2->Location = System::Drawing::Point(258, 12);
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
			this->steps->Text = L"500";
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
			this->x_end->Text = L"520";
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
			this->y_end->Text = L"125";
			// 
			// z_end
			// 
			this->z_end->Location = System::Drawing::Point(70, 207);
			this->z_end->Name = L"z_end";
			this->z_end->Size = System::Drawing::Size(43, 20);
			this->z_end->TabIndex = 31;
			this->z_end->Text = L"200";
			// 
			// x_start
			// 
			this->x_start->Location = System::Drawing::Point(71, 49);
			this->x_start->Name = L"x_start";
			this->x_start->Size = System::Drawing::Size(43, 20);
			this->x_start->TabIndex = 24;
			this->x_start->Text = L"10";
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
			this->y_start->Text = L"40";
			// 
			// z_start
			// 
			this->z_start->Location = System::Drawing::Point(71, 102);
			this->z_start->Name = L"z_start";
			this->z_start->Size = System::Drawing::Size(43, 20);
			this->z_start->TabIndex = 25;
			this->z_start->Text = L"15";
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
			this->groupBox3->Location = System::Drawing::Point(12, 299);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1010, 507);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->View);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L" ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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
		double steps = to_double(this->steps->Text);
		double L = L5 + L6;
		//alpha1
		double angle1 = 45;
		double alpha1 = angle1 * M_PI / 180.0; // konwersja kąta na radiany
		//alpha2
		double angle2 = 45;
		double alpha2 = angle2 * M_PI / 180.0; // konwersja kąta na radiany
		//alpha3
		double angle3 = 45;
		double alpha3 = angle3 * M_PI / 180.0; // konwersja kąta na radiany
		//alpha4
		double angle4 = 45;
		double alpha4 = angle4 * M_PI / 180.0; // konwersja kąta na radiany
		//sin and cos
		double cos_value_teta = std::cos(teta); // obliczenie cosinusa
		double sin_value_teta = std::sin(teta); // obliczenie sinusa
		double cos_value_fi = std::cos(fi); // obliczenie cosinusa
		double sin_value_fi = std::sin(fi); // obliczenie sinusa
		double cos_value1 = std::cos(alpha1); // obliczenie cosinusa
		double sin_value1 = std::sin(alpha1); // obliczenie sinusa
		double cos_value2 = std::cos(alpha2); // obliczenie cosinusa
		double sin_value2 = std::sin(alpha2); // obliczenie sinusa
		double cos_value23 = std::cos(alpha2 + alpha3); // obliczenie cosinusa
		double sin_value23 = std::sin(alpha2 + alpha3); // obliczenie sinusa
		double cos_value234 = std::cos(alpha2 + alpha3 + alpha4); // obliczenie cosinusa
		double sin_value234 = std::sin(alpha2 + alpha3 + alpha4); // obliczenie sinusa
		//Punkt0
		int x0 = 0;
		int y0 = 0;
		int z0 = 0;
		//Punkt1
		int x1 = L1 * cos_value1;
		int y1 = L1 * sin_value1;
		int z1 = 0;
		//Punkt2
		int x2 = x1 + d * sin_value1;
		int y2 = y1 - d * cos_value1;
		int z2 = L2 * sin_value2;
		//Punkt3
		int x3 = x2 - (d - ee) * sin_value1;
		int y3 = y2 + (d - ee) * cos_value1;
		int z3 = z2;
		//Punkt4
		int x4 = x3 + L3 * cos_value1 * cos_value23;
		int y4 = y3 + L3 * sin_value1 * cos_value23;
		int z4 = z3 + L3 * sin_value23;
		//Punkt5
		int x5 = x4 + L4 * cos_value1 * cos_value234 ;
		int y5 = y4 + L4 * sin_value1 * cos_value234;
		int z5 = z4 + L4 * sin_value234;
		//Punkt6 
		int xT = x5 + L * cos_value_teta * cos_value_fi;
		int yT = y5 + L * cos_value_teta * sin_value_fi;
		int zT = z5 + L * sin_value_teta;
		// ustaw zakre osi
		chart1->ChartAreas[0]->AxisX->Title = "X";
		chart1->ChartAreas[0]->AxisY->Title = "Y";
		chart1->ChartAreas[0]->AxisX->Minimum = -1000;
		chart1->ChartAreas[0]->AxisX->Maximum = 1000;
		chart1->ChartAreas[0]->AxisY->Minimum = -1000;
		chart1->ChartAreas[0]->AxisY->Maximum = 1000;
		chart1->ChartAreas[0]->AxisX->Interval = 100;
		chart1->ChartAreas[0]->AxisY->Interval = 100;

		// ustaw marginesy wyświetlania
		chart1->ChartAreas[0]->InnerPlotPosition->Auto = false;
		chart1->ChartAreas[0]->InnerPlotPosition->Width = 80;
		chart1->ChartAreas[0]->InnerPlotPosition->Height = 80;
		chart1->ChartAreas[0]->InnerPlotPosition->X = 10;
		chart1->ChartAreas[0]->InnerPlotPosition->Y = 10;

		// usuń siatkę
		chart1->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
		chart1->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;
		chart1->Series["Series1"]->Points->AddXY(x0, y0);
		chart1->Series["Series1"]->Points->AddXY(x1, y1);
		chart1->Series["Series2"]->Points->AddXY(x1, y1);
		chart1->Series["Series2"]->Points->AddXY(x2, y2);
		chart1->Series["Series3"]->Points->AddXY(x2, y2);
		chart1->Series["Series3"]->Points->AddXY(x3, y3);
		chart1->Series["Series4"]->Points->AddXY(x3, y3);
		chart1->Series["Series4"]->Points->AddXY(x4, y4);
		chart1->Series["Series5"]->Points->AddXY(x4, y4);
		chart1->Series["Series5"]->Points->AddXY(x5, y5);
		chart1->Series["Series6"]->Points->AddXY(x5, y5);
		chart1->Series["Series6"]->Points->AddXY(xT, yT);
	}
};
};
