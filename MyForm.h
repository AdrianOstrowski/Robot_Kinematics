#pragma once

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
	private: System::Windows::Forms::TextBox^ textBox1;
	public protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	public protected: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private:
	public protected: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	public protected: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::GroupBox^ groupBox3;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(286, 329);
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
			this->label5->Location = System::Drawing::Point(14, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"d[mm]";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(130, 135);
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
			this->label10->Location = System::Drawing::Point(130, 186);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 13);
			this->label10->TabIndex = 10;
			this->label10->Text = L"θ[*]";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(130, 212);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(29, 13);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Ψ[*]";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 186);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"δ1[1/-1]";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(13, 212);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"δ2[1/-1]";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(13, 236);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 13);
			this->label14->TabIndex = 14;
			this->label14->Text = L"δ3[1/-1]";
			// 
			// View
			// 
			chartArea1->Name = L"ChartArea1";
			this->View->ChartAreas->Add(chartArea1);
			this->View->Location = System::Drawing::Point(487, 255);
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(61, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(43, 20);
			this->textBox1->TabIndex = 16;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(177, 132);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(43, 20);
			this->textBox2->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(61, 132);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(43, 20);
			this->textBox3->TabIndex = 18;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(61, 84);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(43, 20);
			this->textBox4->TabIndex = 19;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(61, 58);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(43, 20);
			this->textBox5->TabIndex = 20;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(177, 31);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(43, 20);
			this->textBox6->TabIndex = 21;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(177, 57);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(43, 20);
			this->textBox7->TabIndex = 22;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(177, 83);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(43, 20);
			this->textBox8->TabIndex = 23;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(177, 183);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(43, 20);
			this->textBox9->TabIndex = 24;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(177, 209);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(43, 20);
			this->textBox10->TabIndex = 25;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(60, 182);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(43, 20);
			this->textBox11->TabIndex = 26;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(61, 209);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(43, 20);
			this->textBox12->TabIndex = 27;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(61, 233);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(43, 20);
			this->textBox13->TabIndex = 28;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox13);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox12);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->textBox2);
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
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->Location = System::Drawing::Point(781, 255);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Name = L"Series1";
			series2->YValuesPerPoint = 4;
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(288, 237);
			this->chart1->TabIndex = 30;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
			this->chart2->Location = System::Drawing::Point(781, 12);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Name = L"Series1";
			series3->YValuesPerPoint = 4;
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(288, 237);
			this->chart2->TabIndex = 31;
			this->chart2->Text = L"chart1";
			// 
			// chart3
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea4);
			this->chart3->Location = System::Drawing::Point(487, 12);
			this->chart3->Name = L"chart3";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Name = L"Series1";
			series4->YValuesPerPoint = 4;
			this->chart3->Series->Add(series4);
			this->chart3->Size = System::Drawing::Size(288, 237);
			this->chart3->TabIndex = 32;
			this->chart3->Text = L"chart1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->textBox20);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->textBox17);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->textBox18);
			this->groupBox2->Controls->Add(this->textBox19);
			this->groupBox2->Controls->Add(this->textBox14);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->textBox15);
			this->groupBox2->Controls->Add(this->textBox16);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox2->Location = System::Drawing::Point(272, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(142, 310);
			this->groupBox2->TabIndex = 33;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Trajectory";
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
			this->label20->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(70, 154);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(43, 20);
			this->textBox17->TabIndex = 30;
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
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(70, 181);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(43, 20);
			this->textBox18->TabIndex = 32;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(70, 207);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(43, 20);
			this->textBox19->TabIndex = 31;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(71, 49);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(43, 20);
			this->textBox14->TabIndex = 24;
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
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(71, 76);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(43, 20);
			this->textBox15->TabIndex = 26;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(71, 102);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(43, 20);
			this->textBox16->TabIndex = 25;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(24, 250);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(91, 13);
			this->label22->TabIndex = 35;
			this->label22->Text = L"Points of move";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(27, 266);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(86, 20);
			this->textBox20->TabIndex = 36;
			// 
			// groupBox3
			// 
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox3->Location = System::Drawing::Point(12, 299);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(232, 182);
			this->groupBox3->TabIndex = 34;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Results";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1080, 507);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->View);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->View))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
