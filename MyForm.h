#pragma once
#include <string>
#include <algorithm>
#include <iostream>
#include <math.h>
#define M 20
#define K 9


namespace Discretochka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using std::string;
	struct N {
		int n;
		int q[20];
	};

	struct Z {
		int d;
		int n;
		int q[20];
	};

	struct Q {
		Z num;
		N def;
	};

	struct P {
		int n;
		Q coef[20];
	};

	int logN = 0, logZ = 0, logQ = 0, logP = 0, logOp = 0, logK=0;
	int logNum = 0, logDef = 0, numCoef=0, logCoef=0, last_op;
	string sm, sd, st;
	N Na, Nb;
	Z Za, Zb;
	Q Qa, Qb;
	P Pa, Pb;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ but_x;
	private: System::Windows::Forms::Button^ but_den;
	private: System::Windows::Forms::Button^ but_1;
	private: System::Windows::Forms::Button^ but_2;
	private: System::Windows::Forms::Button^ but_3;
	private: System::Windows::Forms::Button^ but_4;
	private: System::Windows::Forms::Button^ but_5;
	private: System::Windows::Forms::Button^ but_6;
	private: System::Windows::Forms::Button^ but_7;
	private: System::Windows::Forms::Button^ but_8;
	private: System::Windows::Forms::Button^ but_9;
	private: System::Windows::Forms::Button^ but_del;
	private: System::Windows::Forms::Button^ but_equal;
	private: System::Windows::Forms::Button^ but_0;
	private: System::Windows::Forms::Button^ but_minus;

	private: System::Windows::Forms::Button^ but_N;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ but_Z;
	private: System::Windows::Forms::Button^ but_R;
	private: System::Windows::Forms::Button^ but_P;
	private: System::Windows::Forms::Button^ but_COM;
	private: System::Windows::Forms::Button^ but_NtoZ;
	private: System::Windows::Forms::Button^ but_ZtoN;
	private: System::Windows::Forms::Button^ but_ZtoR;
	private: System::Windows::Forms::Button^ but_RtoZ;
	private: System::Windows::Forms::Button^ but_POZ;
	private: System::Windows::Forms::Button^ but_ADD;
	private: System::Windows::Forms::Button^ but_ADD1;
	private: System::Windows::Forms::Button^ but_MULk;
	private: System::Windows::Forms::Button^ but_MUL10;
	private: System::Windows::Forms::Button^ but_MUL;
	private: System::Windows::Forms::Button^ but_SUB;

	private: System::Windows::Forms::Button^ but_DIV;
	private: System::Windows::Forms::Button^ but_MOD;
	private: System::Windows::Forms::Button^ but_GCF;
	private: System::Windows::Forms::Button^ but_LCM;

	private: System::Windows::Forms::Button^ but_ABS;
	private: System::Windows::Forms::Button^ but_RED;
	private: System::Windows::Forms::Button^ but_INT;
	private: System::Windows::Forms::Button^ but_DIVI;
	private: System::Windows::Forms::Button^ but_LED;
	private: System::Windows::Forms::Button^ but_DEG;
	private: System::Windows::Forms::Button^ but_DER;
	private: System::Windows::Forms::Button^ but_FAC;
	private: System::Windows::Forms::Button^ but_NMP;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lab_top;

	private: System::Windows::Forms::Label^ lab_mid;
	private: System::Windows::Forms::Label^ lab_bot;


	private: System::Windows::Forms::Label^ lab_help;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->but_x = (gcnew System::Windows::Forms::Button());
			this->but_den = (gcnew System::Windows::Forms::Button());
			this->but_1 = (gcnew System::Windows::Forms::Button());
			this->but_2 = (gcnew System::Windows::Forms::Button());
			this->but_3 = (gcnew System::Windows::Forms::Button());
			this->but_4 = (gcnew System::Windows::Forms::Button());
			this->but_5 = (gcnew System::Windows::Forms::Button());
			this->but_6 = (gcnew System::Windows::Forms::Button());
			this->but_7 = (gcnew System::Windows::Forms::Button());
			this->but_8 = (gcnew System::Windows::Forms::Button());
			this->but_9 = (gcnew System::Windows::Forms::Button());
			this->but_del = (gcnew System::Windows::Forms::Button());
			this->but_equal = (gcnew System::Windows::Forms::Button());
			this->but_0 = (gcnew System::Windows::Forms::Button());
			this->but_minus = (gcnew System::Windows::Forms::Button());
			this->but_N = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->but_Z = (gcnew System::Windows::Forms::Button());
			this->but_R = (gcnew System::Windows::Forms::Button());
			this->but_P = (gcnew System::Windows::Forms::Button());
			this->but_COM = (gcnew System::Windows::Forms::Button());
			this->but_NtoZ = (gcnew System::Windows::Forms::Button());
			this->but_ZtoN = (gcnew System::Windows::Forms::Button());
			this->but_ZtoR = (gcnew System::Windows::Forms::Button());
			this->but_RtoZ = (gcnew System::Windows::Forms::Button());
			this->but_POZ = (gcnew System::Windows::Forms::Button());
			this->but_ADD = (gcnew System::Windows::Forms::Button());
			this->but_ADD1 = (gcnew System::Windows::Forms::Button());
			this->but_MULk = (gcnew System::Windows::Forms::Button());
			this->but_MUL10 = (gcnew System::Windows::Forms::Button());
			this->but_MUL = (gcnew System::Windows::Forms::Button());
			this->but_SUB = (gcnew System::Windows::Forms::Button());
			this->but_DIV = (gcnew System::Windows::Forms::Button());
			this->but_MOD = (gcnew System::Windows::Forms::Button());
			this->but_GCF = (gcnew System::Windows::Forms::Button());
			this->but_LCM = (gcnew System::Windows::Forms::Button());
			this->but_ABS = (gcnew System::Windows::Forms::Button());
			this->but_RED = (gcnew System::Windows::Forms::Button());
			this->but_INT = (gcnew System::Windows::Forms::Button());
			this->but_DIVI = (gcnew System::Windows::Forms::Button());
			this->but_LED = (gcnew System::Windows::Forms::Button());
			this->but_DEG = (gcnew System::Windows::Forms::Button());
			this->but_DER = (gcnew System::Windows::Forms::Button());
			this->but_FAC = (gcnew System::Windows::Forms::Button());
			this->but_NMP = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lab_top = (gcnew System::Windows::Forms::Label());
			this->lab_mid = (gcnew System::Windows::Forms::Label());
			this->lab_bot = (gcnew System::Windows::Forms::Label());
			this->lab_help = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// but_x
			// 
			this->but_x->BackColor = System::Drawing::Color::Gainsboro;
			this->but_x->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->but_x->FlatAppearance->BorderSize = 0;
			this->but_x->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_x->ForeColor = System::Drawing::Color::Black;
			this->but_x->Location = System::Drawing::Point(468, 296);
			this->but_x->Margin = System::Windows::Forms::Padding(0);
			this->but_x->Name = L"but_x";
			this->but_x->Size = System::Drawing::Size(75, 50);
			this->but_x->TabIndex = 21;
			this->but_x->Text = L"x^";
			this->but_x->UseVisualStyleBackColor = false;
			this->but_x->Visible = false;
			this->but_x->Click += gcnew System::EventHandler(this, &MyForm::but_x_Click);
			// 
			// but_den
			// 
			this->but_den->BackColor = System::Drawing::Color::Gainsboro;
			this->but_den->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->but_den->FlatAppearance->BorderSize = 0;
			this->but_den->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_den->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_den->ForeColor = System::Drawing::Color::Black;
			this->but_den->Location = System::Drawing::Point(468, 244);
			this->but_den->Margin = System::Windows::Forms::Padding(0);
			this->but_den->Name = L"but_den";
			this->but_den->Size = System::Drawing::Size(75, 50);
			this->but_den->TabIndex = 19;
			this->but_den->Text = L"---";
			this->but_den->UseVisualStyleBackColor = false;
			this->but_den->Visible = false;
			this->but_den->Click += gcnew System::EventHandler(this, &MyForm::but_den_Click);
			// 
			// but_1
			// 
			this->but_1->BackColor = System::Drawing::Color::DimGray;
			this->but_1->FlatAppearance->BorderSize = 0;
			this->but_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_1->Location = System::Drawing::Point(553, 296);
			this->but_1->Margin = System::Windows::Forms::Padding(0);
			this->but_1->Name = L"but_1";
			this->but_1->Size = System::Drawing::Size(75, 50);
			this->but_1->TabIndex = 0;
			this->but_1->Text = L"1";
			this->but_1->UseVisualStyleBackColor = false;
			this->but_1->Click += gcnew System::EventHandler(this, &MyForm::but_1_Click);
			// 
			// but_2
			// 
			this->but_2->BackColor = System::Drawing::Color::DimGray;
			this->but_2->FlatAppearance->BorderSize = 0;
			this->but_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_2->Location = System::Drawing::Point(630, 296);
			this->but_2->Name = L"but_2";
			this->but_2->Size = System::Drawing::Size(75, 50);
			this->but_2->TabIndex = 1;
			this->but_2->Text = L"2";
			this->but_2->UseVisualStyleBackColor = false;
			this->but_2->Click += gcnew System::EventHandler(this, &MyForm::but_2_Click);
			// 
			// but_3
			// 
			this->but_3->BackColor = System::Drawing::Color::DimGray;
			this->but_3->FlatAppearance->BorderSize = 0;
			this->but_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_3->Location = System::Drawing::Point(705, 296);
			this->but_3->Margin = System::Windows::Forms::Padding(0);
			this->but_3->Name = L"but_3";
			this->but_3->Size = System::Drawing::Size(75, 50);
			this->but_3->TabIndex = 2;
			this->but_3->Text = L"3";
			this->but_3->UseVisualStyleBackColor = false;
			this->but_3->Click += gcnew System::EventHandler(this, &MyForm::but_3_Click);
			// 
			// but_4
			// 
			this->but_4->BackColor = System::Drawing::Color::DimGray;
			this->but_4->FlatAppearance->BorderSize = 0;
			this->but_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_4->Location = System::Drawing::Point(553, 244);
			this->but_4->Margin = System::Windows::Forms::Padding(0);
			this->but_4->Name = L"but_4";
			this->but_4->Size = System::Drawing::Size(75, 50);
			this->but_4->TabIndex = 3;
			this->but_4->Text = L"4";
			this->but_4->UseVisualStyleBackColor = false;
			this->but_4->Click += gcnew System::EventHandler(this, &MyForm::but_4_Click);
			// 
			// but_5
			// 
			this->but_5->BackColor = System::Drawing::Color::DimGray;
			this->but_5->FlatAppearance->BorderSize = 0;
			this->but_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_5->Location = System::Drawing::Point(630, 244);
			this->but_5->Margin = System::Windows::Forms::Padding(0);
			this->but_5->Name = L"but_5";
			this->but_5->Size = System::Drawing::Size(75, 50);
			this->but_5->TabIndex = 4;
			this->but_5->Text = L"5";
			this->but_5->UseVisualStyleBackColor = false;
			this->but_5->Click += gcnew System::EventHandler(this, &MyForm::but_5_Click);
			// 
			// but_6
			// 
			this->but_6->BackColor = System::Drawing::Color::DimGray;
			this->but_6->FlatAppearance->BorderSize = 0;
			this->but_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_6->Location = System::Drawing::Point(705, 244);
			this->but_6->Margin = System::Windows::Forms::Padding(0);
			this->but_6->Name = L"but_6";
			this->but_6->Size = System::Drawing::Size(75, 50);
			this->but_6->TabIndex = 5;
			this->but_6->Text = L"6";
			this->but_6->UseVisualStyleBackColor = false;
			this->but_6->Click += gcnew System::EventHandler(this, &MyForm::but_6_Click);
			// 
			// but_7
			// 
			this->but_7->BackColor = System::Drawing::Color::DimGray;
			this->but_7->FlatAppearance->BorderSize = 0;
			this->but_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_7->Location = System::Drawing::Point(553, 192);
			this->but_7->Margin = System::Windows::Forms::Padding(0);
			this->but_7->Name = L"but_7";
			this->but_7->Size = System::Drawing::Size(75, 50);
			this->but_7->TabIndex = 6;
			this->but_7->Text = L"7";
			this->but_7->UseVisualStyleBackColor = false;
			this->but_7->Click += gcnew System::EventHandler(this, &MyForm::but_7_Click);
			// 
			// but_8
			// 
			this->but_8->BackColor = System::Drawing::Color::DimGray;
			this->but_8->FlatAppearance->BorderSize = 0;
			this->but_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_8->Location = System::Drawing::Point(630, 192);
			this->but_8->Margin = System::Windows::Forms::Padding(0);
			this->but_8->Name = L"but_8";
			this->but_8->Size = System::Drawing::Size(75, 50);
			this->but_8->TabIndex = 7;
			this->but_8->Text = L"8";
			this->but_8->UseVisualStyleBackColor = false;
			this->but_8->Click += gcnew System::EventHandler(this, &MyForm::but_8_Click);
			// 
			// but_9
			// 
			this->but_9->BackColor = System::Drawing::Color::DimGray;
			this->but_9->FlatAppearance->BorderSize = 0;
			this->but_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_9->Location = System::Drawing::Point(705, 192);
			this->but_9->Margin = System::Windows::Forms::Padding(0);
			this->but_9->Name = L"but_9";
			this->but_9->Size = System::Drawing::Size(75, 50);
			this->but_9->TabIndex = 8;
			this->but_9->Text = L"9";
			this->but_9->UseVisualStyleBackColor = false;
			this->but_9->Click += gcnew System::EventHandler(this, &MyForm::but_9_Click);
			// 
			// but_del
			// 
			this->but_del->BackColor = System::Drawing::Color::DarkOrange;
			this->but_del->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->but_del->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->but_del->FlatAppearance->BorderSize = 0;
			this->but_del->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_del->ForeColor = System::Drawing::Color::White;
			this->but_del->Location = System::Drawing::Point(781, 192);
			this->but_del->Margin = System::Windows::Forms::Padding(0);
			this->but_del->Name = L"but_del";
			this->but_del->Size = System::Drawing::Size(75, 50);
			this->but_del->TabIndex = 10;
			this->but_del->Text = L"del";
			this->but_del->UseVisualStyleBackColor = false;
			this->but_del->Click += gcnew System::EventHandler(this, &MyForm::but_del_Click);
			// 
			// but_equal
			// 
			this->but_equal->BackColor = System::Drawing::Color::DarkOrange;
			this->but_equal->FlatAppearance->BorderSize = 0;
			this->but_equal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_equal->Location = System::Drawing::Point(781, 296);
			this->but_equal->Margin = System::Windows::Forms::Padding(0);
			this->but_equal->Name = L"but_equal";
			this->but_equal->Size = System::Drawing::Size(75, 102);
			this->but_equal->TabIndex = 11;
			this->but_equal->Text = L"=";
			this->but_equal->UseVisualStyleBackColor = false;
			this->but_equal->Click += gcnew System::EventHandler(this, &MyForm::but_equal_Click);
			// 
			// but_0
			// 
			this->but_0->BackColor = System::Drawing::Color::DimGray;
			this->but_0->FlatAppearance->BorderSize = 0;
			this->but_0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_0->Location = System::Drawing::Point(553, 347);
			this->but_0->Margin = System::Windows::Forms::Padding(0);
			this->but_0->Name = L"but_0";
			this->but_0->Size = System::Drawing::Size(227, 50);
			this->but_0->TabIndex = 13;
			this->but_0->Text = L"0";
			this->but_0->UseVisualStyleBackColor = false;
			this->but_0->Click += gcnew System::EventHandler(this, &MyForm::but_0_Click);
			// 
			// but_minus
			// 
			this->but_minus->BackColor = System::Drawing::Color::Gainsboro;
			this->but_minus->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->but_minus->FlatAppearance->BorderSize = 0;
			this->but_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but_minus->ForeColor = System::Drawing::Color::Black;
			this->but_minus->Location = System::Drawing::Point(468, 192);
			this->but_minus->Margin = System::Windows::Forms::Padding(0);
			this->but_minus->Name = L"but_minus";
			this->but_minus->Size = System::Drawing::Size(75, 50);
			this->but_minus->TabIndex = 29;
			this->but_minus->Text = L"+/-";
			this->but_minus->UseVisualStyleBackColor = false;
			this->but_minus->Visible = false;
			this->but_minus->Click += gcnew System::EventHandler(this, &MyForm::but_minus_Click);
			// 
			// but_N
			// 
			this->but_N->BackColor = System::Drawing::Color::DimGray;
			this->but_N->FlatAppearance->BorderSize = 0;
			this->but_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_N->Location = System::Drawing::Point(2, 2);
			this->but_N->Margin = System::Windows::Forms::Padding(0);
			this->but_N->Name = L"but_N";
			this->but_N->Size = System::Drawing::Size(180, 24);
			this->but_N->TabIndex = 31;
			this->but_N->Text = L"Натуральные числа";
			this->but_N->UseVisualStyleBackColor = false;
			this->but_N->Click += gcnew System::EventHandler(this, &MyForm::but_N_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(185, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 20);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Режим работы:";
			// 
			// but_Z
			// 
			this->but_Z->BackColor = System::Drawing::Color::DimGray;
			this->but_Z->FlatAppearance->BorderSize = 0;
			this->but_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_Z->Location = System::Drawing::Point(2, 28);
			this->but_Z->Margin = System::Windows::Forms::Padding(0);
			this->but_Z->Name = L"but_Z";
			this->but_Z->Size = System::Drawing::Size(180, 25);
			this->but_Z->TabIndex = 33;
			this->but_Z->Text = L"Целые числа";
			this->but_Z->UseVisualStyleBackColor = false;
			this->but_Z->Click += gcnew System::EventHandler(this, &MyForm::but_Z_Click);
			// 
			// but_R
			// 
			this->but_R->BackColor = System::Drawing::Color::DimGray;
			this->but_R->FlatAppearance->BorderSize = 0;
			this->but_R->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_R->Location = System::Drawing::Point(2, 54);
			this->but_R->Margin = System::Windows::Forms::Padding(0);
			this->but_R->Name = L"but_R";
			this->but_R->Size = System::Drawing::Size(180, 25);
			this->but_R->TabIndex = 34;
			this->but_R->Text = L"Рациональные числа";
			this->but_R->UseVisualStyleBackColor = false;
			this->but_R->Click += gcnew System::EventHandler(this, &MyForm::but_R_Click);
			// 
			// but_P
			// 
			this->but_P->BackColor = System::Drawing::Color::DimGray;
			this->but_P->FlatAppearance->BorderSize = 0;
			this->but_P->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_P->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->but_P->Location = System::Drawing::Point(2, 80);
			this->but_P->Margin = System::Windows::Forms::Padding(0);
			this->but_P->Name = L"but_P";
			this->but_P->Size = System::Drawing::Size(180, 24);
			this->but_P->TabIndex = 35;
			this->but_P->Text = L"Многочлены";
			this->but_P->UseVisualStyleBackColor = false;
			this->but_P->Click += gcnew System::EventHandler(this, &MyForm::but_P_Click);
			// 
			// but_COM
			// 
			this->but_COM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_COM->FlatAppearance->BorderSize = 0;
			this->but_COM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_COM->Location = System::Drawing::Point(2, 193);
			this->but_COM->Margin = System::Windows::Forms::Padding(0);
			this->but_COM->Name = L"but_COM";
			this->but_COM->Size = System::Drawing::Size(180, 50);
			this->but_COM->TabIndex = 36;
			this->but_COM->Text = L"Сравнение a и b";
			this->but_COM->UseVisualStyleBackColor = false;
			this->but_COM->Visible = false;
			this->but_COM->Click += gcnew System::EventHandler(this, &MyForm::but_COM_Click);
			// 
			// but_NtoZ
			// 
			this->but_NtoZ->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_NtoZ->FlatAppearance->BorderSize = 0;
			this->but_NtoZ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_NtoZ->Location = System::Drawing::Point(2, 245);
			this->but_NtoZ->Margin = System::Windows::Forms::Padding(0);
			this->but_NtoZ->Name = L"but_NtoZ";
			this->but_NtoZ->Size = System::Drawing::Size(180, 50);
			this->but_NtoZ->TabIndex = 37;
			this->but_NtoZ->Text = L"Преобразование натурального в целое";
			this->but_NtoZ->UseVisualStyleBackColor = false;
			this->but_NtoZ->Visible = false;
			this->but_NtoZ->Click += gcnew System::EventHandler(this, &MyForm::but_NtoZ_Click);
			// 
			// but_ZtoN
			// 
			this->but_ZtoN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_ZtoN->FlatAppearance->BorderSize = 0;
			this->but_ZtoN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_ZtoN->Location = System::Drawing::Point(184, 296);
			this->but_ZtoN->Margin = System::Windows::Forms::Padding(0);
			this->but_ZtoN->Name = L"but_ZtoN";
			this->but_ZtoN->Size = System::Drawing::Size(182, 50);
			this->but_ZtoN->TabIndex = 38;
			this->but_ZtoN->Text = L"Преобразование целого в натуральное";
			this->but_ZtoN->UseVisualStyleBackColor = false;
			this->but_ZtoN->Visible = false;
			this->but_ZtoN->Click += gcnew System::EventHandler(this, &MyForm::but_ZtoN_Click);
			// 
			// but_ZtoR
			// 
			this->but_ZtoR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_ZtoR->FlatAppearance->BorderSize = 0;
			this->but_ZtoR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_ZtoR->Location = System::Drawing::Point(184, 244);
			this->but_ZtoR->Margin = System::Windows::Forms::Padding(0);
			this->but_ZtoR->Name = L"but_ZtoR";
			this->but_ZtoR->Size = System::Drawing::Size(182, 50);
			this->but_ZtoR->TabIndex = 39;
			this->but_ZtoR->Text = L"Преобразование целого в дробное";
			this->but_ZtoR->UseVisualStyleBackColor = false;
			this->but_ZtoR->Visible = false;
			this->but_ZtoR->Click += gcnew System::EventHandler(this, &MyForm::but_ZtoR_Click);
			// 
			// but_RtoZ
			// 
			this->but_RtoZ->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_RtoZ->FlatAppearance->BorderSize = 0;
			this->but_RtoZ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_RtoZ->Location = System::Drawing::Point(2, 192);
			this->but_RtoZ->Margin = System::Windows::Forms::Padding(0);
			this->but_RtoZ->Name = L"but_RtoZ";
			this->but_RtoZ->Size = System::Drawing::Size(180, 50);
			this->but_RtoZ->TabIndex = 40;
			this->but_RtoZ->Text = L"Преобразование дробного в целое";
			this->but_RtoZ->UseVisualStyleBackColor = false;
			this->but_RtoZ->Visible = false;
			this->but_RtoZ->Click += gcnew System::EventHandler(this, &MyForm::but_RtoZ_Click);
			// 
			// but_POZ
			// 
			this->but_POZ->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_POZ->FlatAppearance->BorderSize = 0;
			this->but_POZ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_POZ->Location = System::Drawing::Point(2, 192);
			this->but_POZ->Margin = System::Windows::Forms::Padding(0);
			this->but_POZ->Name = L"but_POZ";
			this->but_POZ->Size = System::Drawing::Size(180, 50);
			this->but_POZ->TabIndex = 41;
			this->but_POZ->Text = L"Сравнение с 0";
			this->but_POZ->UseVisualStyleBackColor = false;
			this->but_POZ->Visible = false;
			this->but_POZ->Click += gcnew System::EventHandler(this, &MyForm::but_POZ_Click);
			// 
			// but_ADD
			// 
			this->but_ADD->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_ADD->FlatAppearance->BorderSize = 0;
			this->but_ADD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_ADD->Location = System::Drawing::Point(368, 192);
			this->but_ADD->Margin = System::Windows::Forms::Padding(0);
			this->but_ADD->Name = L"but_ADD";
			this->but_ADD->Size = System::Drawing::Size(90, 50);
			this->but_ADD->TabIndex = 42;
			this->but_ADD->Text = L"a + b";
			this->but_ADD->UseVisualStyleBackColor = false;
			this->but_ADD->Visible = false;
			this->but_ADD->Click += gcnew System::EventHandler(this, &MyForm::but_ADD_Click);
			// 
			// but_ADD1
			// 
			this->but_ADD1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_ADD1->FlatAppearance->BorderSize = 0;
			this->but_ADD1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_ADD1->Location = System::Drawing::Point(276, 347);
			this->but_ADD1->Margin = System::Windows::Forms::Padding(0);
			this->but_ADD1->Name = L"but_ADD1";
			this->but_ADD1->Size = System::Drawing::Size(90, 50);
			this->but_ADD1->TabIndex = 43;
			this->but_ADD1->Text = L"a + 1";
			this->but_ADD1->UseVisualStyleBackColor = false;
			this->but_ADD1->Visible = false;
			this->but_ADD1->Click += gcnew System::EventHandler(this, &MyForm::but_ADD1_Click);
			// 
			// but_MULk
			// 
			this->but_MULk->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_MULk->FlatAppearance->BorderSize = 0;
			this->but_MULk->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_MULk->Location = System::Drawing::Point(276, 296);
			this->but_MULk->Margin = System::Windows::Forms::Padding(0);
			this->but_MULk->Name = L"but_MULk";
			this->but_MULk->Size = System::Drawing::Size(90, 50);
			this->but_MULk->TabIndex = 44;
			this->but_MULk->Text = L"a * k";
			this->but_MULk->UseVisualStyleBackColor = false;
			this->but_MULk->Visible = false;
			this->but_MULk->Click += gcnew System::EventHandler(this, &MyForm::but_MULk_Click);
			// 
			// but_MUL10
			// 
			this->but_MUL10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_MUL10->FlatAppearance->BorderSize = 0;
			this->but_MUL10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_MUL10->Location = System::Drawing::Point(184, 296);
			this->but_MUL10->Margin = System::Windows::Forms::Padding(0);
			this->but_MUL10->Name = L"but_MUL10";
			this->but_MUL10->Size = System::Drawing::Size(90, 50);
			this->but_MUL10->TabIndex = 45;
			this->but_MUL10->Text = L"a * 10^k";
			this->but_MUL10->UseVisualStyleBackColor = false;
			this->but_MUL10->Visible = false;
			this->but_MUL10->Click += gcnew System::EventHandler(this, &MyForm::but_MUL10_Click);
			// 
			// but_MUL
			// 
			this->but_MUL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_MUL->FlatAppearance->BorderSize = 0;
			this->but_MUL->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_MUL->Location = System::Drawing::Point(368, 296);
			this->but_MUL->Margin = System::Windows::Forms::Padding(0);
			this->but_MUL->Name = L"but_MUL";
			this->but_MUL->Size = System::Drawing::Size(90, 50);
			this->but_MUL->TabIndex = 46;
			this->but_MUL->Text = L"a * b";
			this->but_MUL->UseVisualStyleBackColor = false;
			this->but_MUL->Visible = false;
			this->but_MUL->Click += gcnew System::EventHandler(this, &MyForm::but_MUL_Click);
			// 
			// but_SUB
			// 
			this->but_SUB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_SUB->FlatAppearance->BorderSize = 0;
			this->but_SUB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_SUB->Location = System::Drawing::Point(368, 244);
			this->but_SUB->Margin = System::Windows::Forms::Padding(0);
			this->but_SUB->Name = L"but_SUB";
			this->but_SUB->Size = System::Drawing::Size(90, 50);
			this->but_SUB->TabIndex = 47;
			this->but_SUB->Text = L"a - b";
			this->but_SUB->UseVisualStyleBackColor = false;
			this->but_SUB->Visible = false;
			this->but_SUB->Click += gcnew System::EventHandler(this, &MyForm::but_SUB_Click);
			// 
			// but_DIV
			// 
			this->but_DIV->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_DIV->FlatAppearance->BorderSize = 0;
			this->but_DIV->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_DIV->Location = System::Drawing::Point(184, 192);
			this->but_DIV->Margin = System::Windows::Forms::Padding(0);
			this->but_DIV->Name = L"but_DIV";
			this->but_DIV->Size = System::Drawing::Size(90, 50);
			this->but_DIV->TabIndex = 49;
			this->but_DIV->Text = L"a div b";
			this->but_DIV->UseVisualStyleBackColor = false;
			this->but_DIV->Visible = false;
			this->but_DIV->Click += gcnew System::EventHandler(this, &MyForm::but_DIV_Click);
			// 
			// but_MOD
			// 
			this->but_MOD->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_MOD->FlatAppearance->BorderSize = 0;
			this->but_MOD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_MOD->Location = System::Drawing::Point(276, 192);
			this->but_MOD->Margin = System::Windows::Forms::Padding(0);
			this->but_MOD->Name = L"but_MOD";
			this->but_MOD->Size = System::Drawing::Size(90, 50);
			this->but_MOD->TabIndex = 50;
			this->but_MOD->Text = L"a mod b";
			this->but_MOD->UseVisualStyleBackColor = false;
			this->but_MOD->Visible = false;
			this->but_MOD->Click += gcnew System::EventHandler(this, &MyForm::but_MOD_Click);
			// 
			// but_GCF
			// 
			this->but_GCF->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_GCF->FlatAppearance->BorderSize = 0;
			this->but_GCF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_GCF->Location = System::Drawing::Point(276, 244);
			this->but_GCF->Margin = System::Windows::Forms::Padding(0);
			this->but_GCF->Name = L"but_GCF";
			this->but_GCF->Size = System::Drawing::Size(90, 50);
			this->but_GCF->TabIndex = 51;
			this->but_GCF->Text = L"НОД(a,b)";
			this->but_GCF->UseVisualStyleBackColor = false;
			this->but_GCF->Visible = false;
			this->but_GCF->Click += gcnew System::EventHandler(this, &MyForm::but_GCF_Click);
			// 
			// but_LCM
			// 
			this->but_LCM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_LCM->FlatAppearance->BorderSize = 0;
			this->but_LCM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_LCM->Location = System::Drawing::Point(184, 244);
			this->but_LCM->Margin = System::Windows::Forms::Padding(0);
			this->but_LCM->Name = L"but_LCM";
			this->but_LCM->Size = System::Drawing::Size(90, 50);
			this->but_LCM->TabIndex = 52;
			this->but_LCM->Text = L"НОК(a,b)";
			this->but_LCM->UseVisualStyleBackColor = false;
			this->but_LCM->Visible = false;
			this->but_LCM->Click += gcnew System::EventHandler(this, &MyForm::but_LCM_Click);
			// 
			// but_ABS
			// 
			this->but_ABS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_ABS->FlatAppearance->BorderSize = 0;
			this->but_ABS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_ABS->Location = System::Drawing::Point(368, 347);
			this->but_ABS->Margin = System::Windows::Forms::Padding(0);
			this->but_ABS->Name = L"but_ABS";
			this->but_ABS->Size = System::Drawing::Size(90, 50);
			this->but_ABS->TabIndex = 54;
			this->but_ABS->Text = L"| a |";
			this->but_ABS->UseVisualStyleBackColor = false;
			this->but_ABS->Visible = false;
			this->but_ABS->Click += gcnew System::EventHandler(this, &MyForm::but_ABS_Click);
			// 
			// but_RED
			// 
			this->but_RED->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_RED->FlatAppearance->BorderSize = 0;
			this->but_RED->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_RED->Location = System::Drawing::Point(184, 244);
			this->but_RED->Margin = System::Windows::Forms::Padding(0);
			this->but_RED->Name = L"but_RED";
			this->but_RED->Size = System::Drawing::Size(182, 50);
			this->but_RED->TabIndex = 55;
			this->but_RED->Text = L"Сокращение дроби";
			this->but_RED->UseVisualStyleBackColor = false;
			this->but_RED->Visible = false;
			this->but_RED->Click += gcnew System::EventHandler(this, &MyForm::but_RED_Click);
			// 
			// but_INT
			// 
			this->but_INT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_INT->FlatAppearance->BorderSize = 0;
			this->but_INT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_INT->Location = System::Drawing::Point(184, 192);
			this->but_INT->Margin = System::Windows::Forms::Padding(0);
			this->but_INT->Name = L"but_INT";
			this->but_INT->Size = System::Drawing::Size(182, 50);
			this->but_INT->TabIndex = 56;
			this->but_INT->Text = L"Проверка на целое";
			this->but_INT->UseVisualStyleBackColor = false;
			this->but_INT->Visible = false;
			this->but_INT->Click += gcnew System::EventHandler(this, &MyForm::but_INT_Click);
			// 
			// but_DIVI
			// 
			this->but_DIVI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_DIVI->FlatAppearance->BorderSize = 0;
			this->but_DIVI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_DIVI->Location = System::Drawing::Point(368, 347);
			this->but_DIVI->Margin = System::Windows::Forms::Padding(0);
			this->but_DIVI->Name = L"but_DIVI";
			this->but_DIVI->Size = System::Drawing::Size(90, 50);
			this->but_DIVI->TabIndex = 57;
			this->but_DIVI->Text = L"a/b";
			this->but_DIVI->UseVisualStyleBackColor = false;
			this->but_DIVI->Visible = false;
			this->but_DIVI->Click += gcnew System::EventHandler(this, &MyForm::but_DIVI_Click);
			// 
			// but_LED
			// 
			this->but_LED->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_LED->FlatAppearance->BorderSize = 0;
			this->but_LED->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_LED->Location = System::Drawing::Point(368, 347);
			this->but_LED->Margin = System::Windows::Forms::Padding(0);
			this->but_LED->Name = L"but_LED";
			this->but_LED->Size = System::Drawing::Size(90, 50);
			this->but_LED->TabIndex = 58;
			this->but_LED->Text = L"LED(P)";
			this->but_LED->UseVisualStyleBackColor = false;
			this->but_LED->Visible = false;
			this->but_LED->Click += gcnew System::EventHandler(this, &MyForm::but_LED_Click);
			// 
			// but_DEG
			// 
			this->but_DEG->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_DEG->FlatAppearance->BorderSize = 0;
			this->but_DEG->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_DEG->Location = System::Drawing::Point(276, 347);
			this->but_DEG->Margin = System::Windows::Forms::Padding(0);
			this->but_DEG->Name = L"but_DEG";
			this->but_DEG->Size = System::Drawing::Size(90, 50);
			this->but_DEG->TabIndex = 59;
			this->but_DEG->Text = L"DEG(P)";
			this->but_DEG->UseVisualStyleBackColor = false;
			this->but_DEG->Visible = false;
			this->but_DEG->Click += gcnew System::EventHandler(this, &MyForm::but_DEG_Click);
			// 
			// but_DER
			// 
			this->but_DER->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_DER->FlatAppearance->BorderSize = 0;
			this->but_DER->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_DER->Location = System::Drawing::Point(184, 347);
			this->but_DER->Margin = System::Windows::Forms::Padding(0);
			this->but_DER->Name = L"but_DER";
			this->but_DER->Size = System::Drawing::Size(90, 50);
			this->but_DER->TabIndex = 60;
			this->but_DER->Text = L"DER(P)";
			this->but_DER->UseVisualStyleBackColor = false;
			this->but_DER->Visible = false;
			this->but_DER->Click += gcnew System::EventHandler(this, &MyForm::but_DER_Click);
			// 
			// but_FAC
			// 
			this->but_FAC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_FAC->FlatAppearance->BorderSize = 0;
			this->but_FAC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_FAC->Location = System::Drawing::Point(2, 192);
			this->but_FAC->Margin = System::Windows::Forms::Padding(0);
			this->but_FAC->Name = L"but_FAC";
			this->but_FAC->Size = System::Drawing::Size(180, 50);
			this->but_FAC->TabIndex = 61;
			this->but_FAC->Text = L"НОК знаменателей НОД числителей";
			this->but_FAC->UseVisualStyleBackColor = false;
			this->but_FAC->Visible = false;
			this->but_FAC->Click += gcnew System::EventHandler(this, &MyForm::but_FAC_Click);
			// 
			// but_NMP
			// 
			this->but_NMP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but_NMP->FlatAppearance->BorderSize = 0;
			this->but_NMP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but_NMP->Location = System::Drawing::Point(2, 245);
			this->but_NMP->Margin = System::Windows::Forms::Padding(0);
			this->but_NMP->Name = L"but_NMP";
			this->but_NMP->Size = System::Drawing::Size(180, 50);
			this->but_NMP->TabIndex = 62;
			this->but_NMP->Text = L"Кратные корни в простые";
			this->but_NMP->UseVisualStyleBackColor = false;
			this->but_NMP->Visible = false;
			this->but_NMP->Click += gcnew System::EventHandler(this, &MyForm::but_NMP_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(187, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 17);
			this->label3->TabIndex = 63;
			this->label3->Text = L"Подсказка:";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(327, 6);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(147, 19);
			this->label4->TabIndex = 64;
			this->label4->Text = L"NONE";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lab_top
			// 
			this->lab_top->BackColor = System::Drawing::Color::Transparent;
			this->lab_top->Font = (gcnew System::Drawing::Font(L"Lucida Console", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_top->ForeColor = System::Drawing::Color::White;
			this->lab_top->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->lab_top->Location = System::Drawing::Point(184, 80);
			this->lab_top->Name = L"lab_top";
			this->lab_top->Size = System::Drawing::Size(672, 50);
			this->lab_top->TabIndex = 65;
			this->lab_top->Text = L"25 2";
			this->lab_top->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// lab_mid
			// 
			this->lab_mid->BackColor = System::Drawing::Color::Transparent;
			this->lab_mid->Font = (gcnew System::Drawing::Font(L"Lucida Console", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_mid->ForeColor = System::Drawing::Color::White;
			this->lab_mid->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->lab_mid->Location = System::Drawing::Point(180, 128);
			this->lab_mid->Name = L"lab_mid";
			this->lab_mid->Size = System::Drawing::Size(676, 21);
			this->lab_mid->TabIndex = 66;
			this->lab_mid->Text = L"−−X ";
			this->lab_mid->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lab_bot
			// 
			this->lab_bot->BackColor = System::Drawing::Color::Transparent;
			this->lab_bot->Font = (gcnew System::Drawing::Font(L"Lucida Console", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lab_bot->ForeColor = System::Drawing::Color::White;
			this->lab_bot->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->lab_bot->Location = System::Drawing::Point(187, 148);
			this->lab_bot->Name = L"lab_bot";
			this->lab_bot->Size = System::Drawing::Size(669, 42);
			this->lab_bot->TabIndex = 67;
			this->lab_bot->Text = L"60  ";
			this->lab_bot->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// lab_help
			// 
			this->lab_help->BackColor = System::Drawing::Color::Transparent;
			this->lab_help->Location = System::Drawing::Point(275, 53);
			this->lab_help->Name = L"lab_help";
			this->lab_help->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lab_help->Size = System::Drawing::Size(555, 23);
			this->lab_help->TabIndex = 68;
			this->lab_help->Text = L"Выберите режим работы из списка слева";
			this->lab_help->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(783, 191);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(0, 0);
			this->button1->TabIndex = 70;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkOrange;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(781, 244);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 50);
			this->button2->TabIndex = 71;
			this->button2->Text = L"С";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(857, 392);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->but_ZtoN);
			this->Controls->Add(this->lab_help);
			this->Controls->Add(this->lab_bot);
			this->Controls->Add(this->lab_mid);
			this->Controls->Add(this->lab_top);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->but_NMP);
			this->Controls->Add(this->but_FAC);
			this->Controls->Add(this->but_DER);
			this->Controls->Add(this->but_DEG);
			this->Controls->Add(this->but_LED);
			this->Controls->Add(this->but_DIVI);
			this->Controls->Add(this->but_INT);
			this->Controls->Add(this->but_RED);
			this->Controls->Add(this->but_ABS);
			this->Controls->Add(this->but_MOD);
			this->Controls->Add(this->but_DIV);
			this->Controls->Add(this->but_SUB);
			this->Controls->Add(this->but_MUL);
			this->Controls->Add(this->but_MUL10);
			this->Controls->Add(this->but_MULk);
			this->Controls->Add(this->but_ADD1);
			this->Controls->Add(this->but_ADD);
			this->Controls->Add(this->but_POZ);
			this->Controls->Add(this->but_RtoZ);
			this->Controls->Add(this->but_ZtoR);
			this->Controls->Add(this->but_NtoZ);
			this->Controls->Add(this->but_COM);
			this->Controls->Add(this->but_P);
			this->Controls->Add(this->but_R);
			this->Controls->Add(this->but_Z);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->but_N);
			this->Controls->Add(this->but_1);
			this->Controls->Add(this->but_del);
			this->Controls->Add(this->but_9);
			this->Controls->Add(this->but_minus);
			this->Controls->Add(this->but_8);
			this->Controls->Add(this->but_x);
			this->Controls->Add(this->but_6);
			this->Controls->Add(this->but_5);
			this->Controls->Add(this->but_3);
			this->Controls->Add(this->but_den);
			this->Controls->Add(this->but_2);
			this->Controls->Add(this->but_equal);
			this->Controls->Add(this->but_0);
			this->Controls->Add(this->but_4);
			this->Controls->Add(this->but_7);
			this->Controls->Add(this->but_GCF);
			this->Controls->Add(this->but_LCM);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(980, 439);
			this->MinimumSize = System::Drawing::Size(875, 439);
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Система линейной алгебры";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

private: void add_num(int x) {
	int i, j;
	if (logOp == 0) {
		if (logN) {
			for (i = Na.n/9; i >= 0; i--) {
				j = Na.q[i] / 100000000;
				if (i != 19) Na.q[i + 1] += j;
				Na.q[i] %= 100000000;
				Na.q[i] *= 10;
			}
			Na.q[0] += x;
			Na.n++;
		}
		if (logZ) {
			for (i = Za.n / 9; i >= 0; i--) {
				j = Za.q[i] / 100000000;
				if (i != 19) Za.q[i + 1] += j;
				Za.q[i] %= 100000000;
				Za.q[i] *= 10;
			}
			Za.q[0] += x;
			Za.n++;
		}
		if (logQ) {
			if (logNum) {
				for (i = Qa.num.n / 9; i >= 0; i--) {
					j = Qa.num.q[i] / 100000000;
					if (i != 19) Qa.num.q[i + 1] += j;
					Qa.num.q[i] %= 100000000;
					Qa.num.q[i] *= 10;
				}
				Qa.num.q[0] += x;
				Qa.num.n++;
			}
			if (logDef) {
				for (i = Qa.def.n / 9; i >= 0; i--) {
					j = Qa.def.q[i] / 100000000;
					if (i != 19) Qa.def.q[i + 1] += j;
					Qa.def.q[i] %= 100000000;
					Qa.def.q[i] *= 10;
				}
				Qa.def.q[0] += x;
				Qa.def.n++;
			}
		}
		if (logP) {
			if (logCoef) {
				if (numCoef < 2) {
					numCoef *= 10;
					numCoef += x;
				}
			}
			else if (logNum) {
				for (i = Pa.coef[0].num.n / 9; i >= 0; i--) {
					j = Pa.coef[0].num.q[i] / 100000000;
					if (i != 19) Pa.coef[0].num.q[i + 1] += j;
					Pa.coef[0].num.q[i] %= 100000000;
					Pa.coef[0].num.q[i] *= 10;
				}
				Pa.coef[0].num.q[0] += x;
				Pa.coef[0].num.n++;
			}
			else if (logDef) {
				for (i = Pa.coef[0].def.n / 9; i >= 0; i--) {
					j = Pa.coef[0].def.q[i] / 100000000;
					if (i != 19) Pa.coef[0].def.q[i + 1] += j;
					Pa.coef[0].def.q[i] %= 100000000;
					Pa.coef[0].def.q[i] *= 10;
				}
				Pa.coef[0].def.q[0] += x;
				Pa.coef[0].def.n++;
			}
		}
	}
	if (logOp == 1) {
		if (logN) {
			if (logK == 1) {
				Nb.q[0] = x;
			}
			else {
				for (i = Nb.n / 9; i >= 0; i--) {
					j = Nb.q[i] / 100000000;
					if (i != 19) Nb.q[i + 1] += j;
					Nb.q[i] %= 100000000;
					Nb.q[i] *= 10;
				}
				Nb.q[0] += x;
				Nb.n++;
			}	
		}
		if (logZ) {
			for (i = Zb.n / 9; i >= 0; i--) {
				j = Zb.q[i] / 100000000;
				if (i != 19) Zb.q[i + 1] += j;
				Zb.q[i] %= 100000000;
				Zb.q[i] *= 10;
			}
			Zb.q[0] += x;
			Zb.n++;
		}
		if (logQ) {
			if (logNum) {
				for (i = Qb.num.n / 9; i >= 0; i--) {
					j = Qb.num.q[i] / 100000000;
					if (i != 19) Qb.num.q[i + 1] += j;
					Qb.num.q[i] %= 100000000;
					Qb.num.q[i] *= 10;
				}
				Qb.num.q[0] += x;
				Qb.num.n++;
			}
			if (logDef) {
				for (i = Qb.def.n / 9; i >= 0; i--) {
					j = Qb.def.q[i] / 100000000;
					if (i != 19) Qb.def.q[i + 1] += j;
					Qb.def.q[i] %= 100000000;
					Qb.def.q[i] *= 10;
				}
				Qb.def.q[0] += x;
				Qb.def.n++;
			}
		}
		if (logP) {
			if (logCoef) {
				if (numCoef < 2) {
					numCoef *= 10;
					numCoef += x;
				}
			}
			else if (logNum) {
				for (i = Pb.coef[0].num.n / 9; i >= 0; i--) {
					j = Pb.coef[0].num.q[i] / 100000000;
					if (i != 19) Pb.coef[0].num.q[i + 1] += j;
					Pb.coef[0].num.q[i] %= 100000000;
					Pb.coef[0].num.q[i] *= 10;
				}
				Pb.coef[0].num.q[0] += x;
				Pb.coef[0].num.n++;
			}
			else if (logDef) {
				for (i = Pb.coef[0].def.n / 9; i >= 0; i--) {
					j = Pb.coef[0].def.q[i] / 100000000;
					if (i != 19) Pb.coef[0].def.q[i + 1] += j;
					Pb.coef[0].def.q[i] %= 100000000;
					Pb.coef[0].def.q[i] *= 10;
				}
				Pb.coef[0].def.q[0] += x;
				Pb.coef[0].def.n++;
			}
		}
	}
	output();
}

private: void output() {
	int i, j;
	sm = "";
	sd = "";
	st = "";
	N nt;
	Z zt;
	Q qt;
	P pt;
	if (logOp == 0){
		if (logN) {
			nt = Na;
			for (i = 0; i < 20; i++) {
				for (j = 0; j < 9; j++) {
					sm = std::to_string(nt.q[i] % 10) + sm;
					nt.q[i] /= 10;
				}
			}
			while (sm[0] == '0' && sm.size()>1) {
				sm.erase(0, 1);
			}
		}
		if (logZ) {
			zt = Za;
			for (i = 0; i < 20; i++) {
				for (j = 0; j < 9; j++) {
					sm = std::to_string(zt.q[i] % 10) + sm;
					zt.q[i] /= 10;
				}
			}
			while (sm[0] == '0' && sm.size() > 1) {
				sm.erase(0, 1);
			}
			if (zt.d == 1) {
				sm = "-" + sm;
			}
		}
		if (logQ){
			qt = Qa;
			for (i = 0; i < 20; i++) {
				for (j = 0; j < 9; j++) {
					st = std::to_string(qt.num.q[i] % 10) + st;
					sd = std::to_string(qt.def.q[i] % 10) + sd;
					qt.num.q[i] /= 10;
					qt.def.q[i] /= 10;
				}
			}
			while (st[0] == '0' && st.size() > 1) {
				st.erase(0, 1);
			}
			while (sd[0] == '0' && sd.size() > 1) {
				sd.erase(0, 1);
			}
			if (sd.size() == 1 && sd == "0") {
				sd = "1";
			}
			for (i = 0; i < std::max(sd.size(), st.size()); i++) {
				sm = "—" + sm;
			}
			while (st.size() < sm.size()) {
				st = " " + st;
			}
			while (sd.size() < sm.size()) {
				sd = " " + sd;
			}
			if (qt.num.d == 1) {
				st = " " + st;
				sm = "-" + sm;
				sd = " " + sd;
			}
		}
		if (logP) {
			string stt = "", sdt = "", smt = "";
			for (int k = 19; k >= 0; k--) {
				qt = Pa.coef[k];
				for (i = 0; i < 20; i++) {
					for (j = 0; j < 9; j++) {
						stt = std::to_string(qt.num.q[i] % 10) + stt;
						sdt = std::to_string(qt.def.q[i] % 10) + sdt;
						qt.num.q[i] /= 10;
						qt.def.q[i] /= 10;
					}
				}
				while (stt[0] == '0' && stt.size() > 1) {
					stt.erase(0, 1);
				}
				if (stt != "0") {
					while (sdt[0] == '0' && sdt.size() > 1) {
						sdt.erase(0, 1);
					}
					if (sdt.size() == 1 && sdt == "0") {
						sdt = "1";
					}
					/*if (sdt != "1") {*/
						for (i = 0; i < std::max(sdt.size(), stt.size()); i++) {
							smt = "—" + smt;
						}
					/*}
					else {
						smt = stt;
						stt = "";
						sdt = "";
					}*/
					while (stt.size() < smt.size()) {
						stt = " " + stt;
					}
					while (sdt.size() < smt.size()) {
						sdt = " " + sdt;
					}
					if (qt.num.d == 1) {
						stt = "  " + stt;
						smt = "- " + smt;
						sdt = "  " + sdt;
					}
					if (qt.num.d == 0 && k != 19) {
						stt = "  " + stt;
						smt = "+ " + smt;
						sdt = "  " + sdt;
					}
					sd = sd + sdt;
					st = st + stt;
					sm = sm + smt;
					if (k != 0 || logCoef) {
						st = st + " " + std::to_string(k);
						sm = sm + "x";
						sd = sd + " ";
						if (k < 10) {
							sm = sm + " ";
							sd = sd + " ";
						}
						else {
							sm = sm + "  ";
							sd = sd + "  ";
						}
					}
				}
				if (sm[0] == '+') {
					sm.erase(0, 1);
				}
				stt = "";
				smt = "";
				sdt = "";
			}
		}
	}
	if (logOp == 1) {
		if (logN) {
			nt = Nb;
			for (i = 0; i < 20; i++) {
				for (j = 0; j < 9; j++) {
					sm = std::to_string(nt.q[i] % 10) + sm;
					nt.q[i] /= 10;
				}
			}
			while (sm[0] == '0' && sm.size() > 1) {
				sm.erase(0, 1);
			}
		}
		if (logZ) {
			zt = Zb;
			for (i = 0; i < 20; i++) {
				for (j = 0; j < 9; j++) {
					sm = std::to_string(zt.q[i] % 10) + sm;
					zt.q[i] /= 10;
				}
			}
			while (sm[0] == '0' && sm.size() > 1) {
				sm.erase(0, 1);
			}
			if (zt.d == 1) {
				sm = "-" + sm;
			}
		}
		if (logQ) {
			qt = Qb;
			for (i = 0; i < 20; i++) {
				for (j = 0; j < 9; j++) {
					st = std::to_string(qt.num.q[i] % 10) + st;
					sd = std::to_string(qt.def.q[i] % 10) + sd;
					qt.num.q[i] /= 10;
					qt.def.q[i] /= 10;
				}
			}
			while (st[0] == '0' && st.size() > 1) {
				st.erase(0, 1);
			}
			while (sd[0] == '0' && sd.size() > 1) {
				sd.erase(0, 1);
			}
			if (sd.size() == 1 && sd == "0") {
				sd = "1";
			}
			for (i = 0; i < std::max(sd.size(), st.size()); i++) {
				sm = "—" + sm;
			}
			while (st.size() < sm.size()) {
				st = " " + st;
			}
			while (sd.size() < sm.size()) {
				sd = " " + sd;
			}
			if (qt.num.d == 1) {
				st = " " + st;
				sm = "-" + sm;
				sd = " " + sd;
			}
		}
		if (logP) {
			string stt = "", sdt = "", smt = "";
			for (int k = 19; k >= 0; k--) {
				qt = Pb.coef[k];
				for (i = 0; i < 20; i++) {
					for (j = 0; j < 9; j++) {
						stt = std::to_string(qt.num.q[i] % 10) + stt;
						sdt = std::to_string(qt.def.q[i] % 10) + sdt;
						qt.num.q[i] /= 10;
						qt.def.q[i] /= 10;
					}
				}
				while (stt[0] == '0' && stt.size() > 1) {
					stt.erase(0, 1);
				}
				if (stt != "0") {
					while (sdt[0] == '0' && sdt.size() > 1) {
						sdt.erase(0, 1);
					}
					if (sdt.size() == 1 && sdt == "0") {
						sdt = "1";
					}
					/*if (sdt != "1") {*/
						for (i = 0; i < std::max(sdt.size(), stt.size()); i++) {
							smt = "—" + smt;
						}
					/*}
					else {
						smt = stt;
						stt = "";
						sdt = "";
					}*/
					while (stt.size() < smt.size()) {
						stt = " " + stt;
					}
					while (sdt.size() < smt.size()) {
						sdt = " " + sdt;
					}
					if (qt.num.d == 1) {
						stt = "  " + stt;
						smt = "- " + smt;
						sdt = "  " + sdt;
					}
					if (qt.num.d == 0 && k != 19) {
						stt = "  " + stt;
						smt = "+ " + smt;
						sdt = "  " + sdt;
					}
					sd = sd + sdt;
					st = st + stt;
					sm = sm + smt;
					if (k != 0 || logCoef) {
						st = st + " " + std::to_string(k);
						sm = sm + "x";
						sd = sd + " ";
						if (k < 10) {
							sm = sm + " ";
							sd = sd + " ";
						}
						else {
							sm = sm + "  ";
							sd = sd + "  ";
						}
					}
				}
				if (sm[0] == '+') {
					sm.erase(0, 1);
				}
				stt = "";
				smt = "";
				sdt = "";
			}
		}
	}
	this->lab_bot->Text = gcnew System::String(sd.c_str());
	this->lab_mid->Text = gcnew System::String(sm.c_str());
	this->lab_top->Text = gcnew System::String(st.c_str());
}

private: System::Void but_N_Click(System::Object^ sender, System::EventArgs^ e) {
	logN = 1; logZ = 0; logQ = 0; logP = 0;
	this->label4->Text = "Натуральные";
	this->lab_help->Text = "Введите первое число";
	this->but_N->BackColor = System::Drawing::Color::DarkOrange;
	this->but_Z->BackColor = System::Drawing::Color::DimGray;
	this->but_R->BackColor = System::Drawing::Color::DimGray;
	this->but_P->BackColor = System::Drawing::Color::DimGray;
	this->but_x->Visible = false;
	this->but_den->Visible = false;
	this->but_minus->Visible = false;
	this->but_COM->Visible = true;
	this->but_NtoZ->Visible = true;
	this->but_ZtoN->Visible = false;
	this->but_ZtoR->Visible = false;
	this->but_RtoZ->Visible = false;
	this->but_POZ->Visible = true;
	this->but_ADD->Visible = true;
	this->but_ADD1->Visible = true;
	this->but_MULk->Visible = true;
	this->but_MUL10->Visible = true;
	this->but_MUL->Visible = true;
	this->but_SUB->Visible = true;
	this->but_DIV->Visible = true;
	this->but_MOD->Visible = true;
	this->but_GCF->Visible = true;
	this->but_LCM->Visible = true;
	this->but_RED->Visible = false;
	this->but_INT->Visible = false;
	this->but_DIVI->Visible = false;
	this->but_LED->Visible = false;
	this->but_DEG->Visible = false;
	this->but_DER->Visible = false;
	this->but_FAC->Visible = false;
	this->but_NMP->Visible = false;
}
private: System::Void but_Z_Click(System::Object^ sender, System::EventArgs^ e) {
	logN = 0; logZ = 1; logQ = 0; logP = 0;
	this->label4->Text = "Целые";
	this->lab_help->Text = "Введите первое число";
	this->but_N->BackColor = System::Drawing::Color::DimGray;
	this->but_Z->BackColor = System::Drawing::Color::DarkOrange;
	this->but_R->BackColor = System::Drawing::Color::DimGray;
	this->but_P->BackColor = System::Drawing::Color::DimGray;
	this->but_x->Visible = false;
	this->but_den->Visible = false;
	this->but_minus->Visible = true;
	this->but_COM->Visible = false;
	this->but_NtoZ->Visible = false;
	this->but_ZtoN->Visible = true;
	this->but_ZtoR->Visible = true;
	this->but_RtoZ->Visible = false;
	this->but_POZ->Visible = true;
	this->but_ADD->Visible = true;
	this->but_ADD1->Visible = false;
	this->but_MULk->Visible = false;
	this->but_MUL10->Visible = false;
	this->but_MUL->Visible = true;
	this->but_SUB->Visible = true;
	this->but_DIV->Visible = true;
	this->but_MOD->Visible = true;
	this->but_GCF->Visible = false;
	this->but_LCM->Visible = false;
	this->but_ABS->Visible = true;
	this->but_RED->Visible = false;
	this->but_INT->Visible = false;
	this->but_DIVI->Visible = false;
	this->but_LED->Visible = false;
	this->but_DEG->Visible = false;
	this->but_DER->Visible = false;
	this->but_FAC->Visible = false;
	this->but_NMP->Visible = false;
}
private: System::Void but_R_Click(System::Object^ sender, System::EventArgs^ e) {
	logN = 0; logZ = 0; logQ = 1; logP = 0;
	logNum = 1; logDef = 0;
	this->label4->Text = "Рациональные";
	this->lab_help->Text = "Введите числитель первого числа, а затем нажмите на --- для ввода знаменателя";
	this->but_N->BackColor = System::Drawing::Color::DimGray;
	this->but_Z->BackColor = System::Drawing::Color::DimGray;
	this->but_R->BackColor = System::Drawing::Color::DarkOrange;
	this->but_P->BackColor = System::Drawing::Color::DimGray;
	this->but_x->Visible = false;
	this->but_den->Visible = true;
	this->but_minus->Visible = true;
	this->but_COM->Visible = false;
	this->but_NtoZ->Visible = false;
	this->but_ZtoN->Visible = false;
	this->but_ZtoR->Visible = false;
	this->but_RtoZ->Visible = true;
	this->but_POZ->Visible = false;
	this->but_ADD->Visible = true;
	this->but_ADD1->Visible = false;
	this->but_MULk->Visible = false;
	this->but_MUL10->Visible = false;
	this->but_MUL->Visible = true;
	this->but_SUB->Visible = true;
	this->but_DIV->Visible = false;
	this->but_MOD->Visible = false;
	this->but_GCF->Visible = false;
	this->but_LCM->Visible = false;
	this->but_ABS->Visible = false;
	this->but_RED->Visible = true;
	this->but_INT->Visible = true;
	this->but_DIVI->Visible = true;
	this->but_LED->Visible = false;
	this->but_DEG->Visible = false;
	this->but_DER->Visible = false;
	this->but_FAC->Visible = false;
	this->but_NMP->Visible = false;
}
private: System::Void but_P_Click(System::Object^ sender, System::EventArgs^ e) {
	logN = 0; logZ = 0; logQ = 0; logP = 1;
	logNum = 1; logDef = 0; logCoef = 0;
	this->label4->Text = "Многочлены";
	this->lab_help->Text = "Введите первое число";
	this->but_N->BackColor = System::Drawing::Color::DimGray;
	this->but_Z->BackColor = System::Drawing::Color::DimGray;
	this->but_R->BackColor = System::Drawing::Color::DimGray;
	this->but_P->BackColor = System::Drawing::Color::DarkOrange;
	this->but_x->Visible = true;
	this->but_den->Visible = true;
	this->but_minus->Visible = true;
	this->but_COM->Visible = false;
	this->but_NtoZ->Visible = false;
	this->but_ZtoN->Visible = false;
	this->but_ZtoR->Visible = false;
	this->but_RtoZ->Visible = false;
	this->but_POZ->Visible = false;
	this->but_ADD->Visible = true;
	this->but_ADD1->Visible = false;
	this->but_MULk->Visible = true;
	this->but_MUL10->Visible = true;
	this->but_MUL->Visible = true;
	this->but_SUB->Visible = true;
	this->but_DIV->Visible = true;
	this->but_MOD->Visible = true;
	this->but_GCF->Visible = true;
	this->but_LCM->Visible = true;
	this->but_ABS->Visible = false;
	this->but_RED->Visible = false;
	this->but_INT->Visible = false;
	this->but_DIVI->Visible = false;
	this->but_LED->Visible = true;
	this->but_DEG->Visible = true;
	this->but_DER->Visible = true;
	this->but_FAC->Visible = true;
	this->but_NMP->Visible = true;
}

private: System::Void but_0_Click(System::Object^ sender, System::EventArgs^ e) {add_num(0);}
private: System::Void but_1_Click(System::Object^ sender, System::EventArgs^ e) {add_num(1);}
private: System::Void but_2_Click(System::Object^ sender, System::EventArgs^ e) {add_num(2);}
private: System::Void but_3_Click(System::Object^ sender, System::EventArgs^ e) {add_num(3);}
private: System::Void but_4_Click(System::Object^ sender, System::EventArgs^ e) {add_num(4);}
private: System::Void but_5_Click(System::Object^ sender, System::EventArgs^ e) {add_num(5);}
private: System::Void but_6_Click(System::Object^ sender, System::EventArgs^ e) {add_num(6);}
private: System::Void but_7_Click(System::Object^ sender, System::EventArgs^ e) {add_num(7);}
private: System::Void but_8_Click(System::Object^ sender, System::EventArgs^ e) {add_num(8);}
private: System::Void but_9_Click(System::Object^ sender, System::EventArgs^ e) {add_num(9);}
private: System::Void but_del_Click(System::Object^ sender, System::EventArgs^ e) {
	int i;
	if (logOp == 0) {
		if (logN) {
			for (i = 0; i <19; i++) {
				Na.q[i] /= 10;
				Na.q[i] += (Na.q[i + 1] % 10) * 100000000;
			}
			Na.q[i] /= 10;
			Na.n--;
		}
		if (logZ) {
			for (i = 0; i < 19; i++) {
				Za.q[i] /= 10;
				Za.q[i] += (Za.q[i + 1] % 10) * 100000000;
			}
			Za.q[i] /= 10;
			Za.n--;
		}
		if (logQ) {
			if (logNum) {
				for (i = 0; i < 19; i++) {
					Qa.num.q[i] /= 10;
					Qa.num.q[i] += (Qa.num.q[i + 1] % 10) * 100000000;
				}
				Qa.num.q[i] /= 10;
				Qa.num.n--;
			}
			if (logDef) {
				for (i = 0; i < 19; i++) {
					Qa.def.q[i] /= 10;
					Qa.def.q[i] += (Qa.def.q[i + 1] % 10) * 100000000;
				}
				Qa.def.q[i] /= 10;
				Qa.def.n--;
			}
		}
		if (logP) {
			if (logCoef) {
				numCoef /= 10;
			}
			else if (logNum) {
				for (i = 0; i < 19; i++) {
					Pa.coef[0].num.q[i] /= 10;
					Pa.coef[0].num.q[i] += (Pa.coef[0].num.q[i + 1] % 10) * 100000000;
				}
				Pa.coef[0].num.q[i] /= 10;
				Pa.coef[0].num.n--;
			}
			else if (logDef) {
				for (i = 0; i < 19; i++) {
					Pa.coef[0].def.q[i] /= 10;
					Pa.coef[0].def.q[i] += (Pa.coef[0].def.q[i + 1] % 10) * 100000000;
				}
				Pa.coef[0].def.q[i] /= 10;
				Pa.coef[0].def.n--;
			}
		}
	}
	if (logOp == 1) {
		if (logN) {
			for (i = 0; i < 19; i++) {
				Nb.q[i] /= 10;
				Nb.q[i] += (Nb.q[i + 1] % 10) * 100000000;
			}
			Nb.q[i] /= 10;
			Nb.n--;
		}
		if (logZ) {
			for (i = 0; i < 19; i++) {
				Zb.q[i] /= 10;
				Zb.q[i] += (Zb.q[i + 1] % 10) * 100000000;
			}
			Zb.q[i] /= 10;
			Nb.n--;
		}
		if (logQ) {
			if (logNum) {
				for (i = 0; i < 19; i++) {
					Qb.num.q[i] /= 10;
					Qb.num.q[i] += (Qb.num.q[i + 1] % 10) * 100000000;
				}
				Qb.num.q[i] /= 10;
				Qb.num.n--;
			}
			if (logDef) {
				for (i = 0; i < 19; i++) {
					Qb.def.q[i] /= 10;
					Qb.def.q[i] += (Qb.def.q[i + 1] % 10) * 100000000;
				}
				Qb.def.q[i] /= 10;
				Qb.def.n--;
			}
		}
		if (logP) {
			if (logCoef) {
				numCoef /= 10;
			}
			else if (logNum) {
				for (i = 0; i < 19; i++) {
					Pb.coef[0].num.q[i] /= 10;
					Pb.coef[0].num.q[i] += (Pb.coef[0].num.q[i + 1] % 10) * 100000000;
				}
				Pb.coef[0].num.q[i] /= 10;
				Pb.coef[0].num.n--;
			}
			else if (logDef) {
				for (i = 0; i < 19; i++) {
					Pb.coef[0].def.q[i] /= 10;
					Pb.coef[0].def.q[i] += (Pb.coef[0].def.q[i + 1] % 10) * 100000000;
				}
				Pb.coef[0].def.q[i] /= 10;
				Pb.coef[0].def.n--;
			}
		}
	}
	output();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int i, j;
	for (i = 0; i < 20; i++) {
		Na.q[i] =0;
		Za.q[i] = 0;
		Nb.q[i] = 0;
		Zb.q[i] = 0;
		Qa.num.q[i] = 0;
		Qa.def.q[i] = 0;
		Qb.num.q[i] = 0;
		Qb.def.q[i] = 0;
	}
	Na.n=0;
	Za.n=0;
	Za.d = 0;
	Nb.n = 0;
	Zb.n = 0;
	Zb.d = 0;
	Qa.num.n = 0;
	Qa.num.d= 0;
	Qa.def.n = 0;
	Qb.num.n = 0;
	Qb.num.d = 0;
	Qb.def.n = 0;
	if (logP) {
		for (i = 0; i < 19; i++) {
			for (j = 0; j < 19; j++) {
				Pa.coef[i].def.q[j] = 0;
				Pa.coef[i].num.q[j] = 0;
				Pb.coef[i].def.q[j] = 0;
				Pb.coef[i].num.q[j] = 0;
			}
			Pa.coef[i].def.n = 0;
			Pa.coef[i].num.n = 0;
			Pa.coef[i].num.d = 0;
			Pb.coef[i].def.n = 0;
			Pb.coef[i].num.n = 0;
			Pb.coef[i].num.d = 0;
		}
		Pa.n = 0;
		Pb.n = 0;
		numCoef = 0;
		logCoef = 0;
	}
	last_op = 0;
	logNum = 1;
	logDef = 0;
	logOp = 0;
	output();
}
private: System::Void but_minus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (logOp == 0) {
		if (logZ) {
			if (Za.d == 1) Za.d = 0;
			else Za.d = 1;
		}
		if (logQ) {
			if (Qa.num.d == 1) Qa.num.d = 0;
			else Qa.num.d = 1;
		}
		if (logP) {
			if (Pa.coef[0].num.d == 1) Pa.coef[0].num.d = 0;
			else Pa.coef[0].num.d = 1;
		}
	}
	if (logOp == 1) {
		if (logZ) {
			if (Zb.d == 1) Zb.d = 0;
			else Zb.d = 1;
		}
		if (logQ) {
			if (Qb.num.d == 1) Qb.num.d = 0;
			else Qb.num.d = 1;
		}
		if (logP) {
			if (Pa.coef[0].num.d == 1) Pa.coef[0].num.d = 0;
			else Pa.coef[0].num.d = 1;
		}
	}
	output();
}
private: System::Void but_den_Click(System::Object^ sender, System::EventArgs^ e) {
	if (logQ && logOp == 0)
		this->lab_help->Text = "Введите знаменатель, после того как закончите ввод выберите операцию";
	if (logQ && logOp)
		this->lab_help->Text = "Введите знаменатель, после того как закончите ввод нажмите равно";
	if (logP)
		this->lab_help->Text = "Введите знаменатель, после того как закончите ввод нажмите кнопку ^x";
	logNum = 0;
	logDef = 1;
}
private: System::Void but_x_Click(System::Object^ sender, System::EventArgs^ e) {
	bool flag = 1;
	if (logCoef == 0) {
		this->lab_help->Text = "Введите степень данного члена и снова нажмите на ^x";
		logNum = 0;
		logCoef = 1;
		numCoef = 0;
		this->but_x->BackColor = System::Drawing::Color::DimGray;
		output();
	}
	else {
		logCoef = 0;
		logNum = 1;
		this->but_x->BackColor = System::Drawing::Color::Gainsboro;
		if (!logOp) {
			for (int i = 0; i < 20; i++)
			{
				if (Pa.coef[0].def.q[i] != 0) flag = 0;
			}
			if (flag) {
				Pa.coef[0].def.q[0] = 1;
			}
			Pa.coef[numCoef] = Pa.coef[0];
			Pa.coef[0].def.n = 0;
			Pa.coef[0].num.n = 0;
			Pa.coef[0].num.d = 0;
			for (int i = 0; i < 20; i++) {
				Pa.coef[0].def.q[i] = 0;
				Pa.coef[0].num.q[i] = 0;
			}
		}
		if (logOp) {
			for (int i = 0; i < 20; i++)
			{
				if (Pb.coef[0].def.q[i] != 0) flag = 0;
			}
			if (flag) {
				Pb.coef[0].def.q[0] = 1;
			}
			Pb.coef[numCoef] = Pb.coef[0];
			Pb.coef[0].def.n = 0;
			Pb.coef[0].num.n = 0;
			Pb.coef[0].num.d = 0;
			for (int i = 0; i < 20; i++) {
				Pb.coef[0].def.q[i] = 0;
				Pb.coef[0].num.q[i] = 0;
			}
		}
		output();
	}
}



private: System::Void but_COM_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lab_help->Text = "Введите второе число для сравнения";
	logOp = 1;
	last_op = 1;
	output();
}
private: System::Void but_ADD_Click(System::Object^ sender, System::EventArgs^ e) {
	if(logN || logZ)
		this->lab_help->Text = "Введите второе число и нажмите на знак равно";
	if (logQ)
		this->lab_help->Text = "Введите числитель второго числа, а затем нажмите на --- для ввода знаменателя";
	logOp = 1;
	last_op = 2;
	logDef = 0;
	logNum = 1;
	output();
}

private: System::Void but_POZ_Click(System::Object^ sender, System::EventArgs^ e) {
	if (logN) {
		if (NZER_N_B(Na) == true) {
			this->lab_mid->Text = "Число не равно нулю";
		}
		else {
			this->lab_mid->Text = "Число равно нулю";
		}
	}
	if (logZ) {
		if (POZ_Z_D(Za) == 0) {
			this->lab_mid->Text = "Число равно нулю";
		}
		else if (POZ_Z_D(Za) == 1) {
			this->lab_mid->Text = "Число меньше нуля";
		}
		else {
			this->lab_mid->Text = "Число больше нуля";
		}
	}
	
}

private: System::Void but_ADD1_Click(System::Object^ sender, System::EventArgs^ e) {
	Na = ADD_1N_N(Na);
	output();
}

private: System::Void but_SUB_Click(System::Object^ sender, System::EventArgs^ e) {
	if (logN || logZ)
		this->lab_help->Text = "Введите второе число и нажмите на знак равно";
	if (logQ)
		this->lab_help->Text = "Введите числитель второго числа, а затем нажмите на --- для ввода знаменателя";
	last_op = 3;
	logOp = 1;
	logDef = 0;
	logNum = 1;
	output();
}

private: System::Void but_MULk_Click(System::Object^ sender, System::EventArgs^ e) {
	if (logN || logZ)
		this->lab_help->Text = "Введите второю цифру и нажмите на знак равно";
	last_op = 4;
	logOp = 1;
	logK = 1;
	output();
}

private: System::Void but_MUL10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (logN || logZ)
		this->lab_help->Text = "Введите степень 10 на которую хотите домножить число и поссле ввода нажмите на знак равно";
	last_op = 5;
	logOp = 1;
	output();

}

private: System::Void but_ABS_Click(System::Object^ sender, System::EventArgs^ e) {
	logN = 1; logZ = 0; logQ = 0; logP = 0;
	this->label4->Text = "Натуральные";
	this->lab_help->Text = "Введите первое число";
	this->but_N->BackColor = System::Drawing::Color::DarkOrange;
	this->but_Z->BackColor = System::Drawing::Color::DimGray;
	this->but_R->BackColor = System::Drawing::Color::DimGray;
	this->but_P->BackColor = System::Drawing::Color::DimGray;
	this->but_x->Visible = false;
	this->but_den->Visible = false;
	this->but_minus->Visible = false;
	this->but_COM->Visible = true;
	this->but_NtoZ->Visible = true;
	this->but_ZtoN->Visible = false;
	this->but_ZtoR->Visible = false;
	this->but_RtoZ->Visible = false;
	this->but_POZ->Visible = true;
	this->but_ADD->Visible = true;
	this->but_ADD1->Visible = true;
	this->but_MULk->Visible = true;
	this->but_MUL10->Visible = true;
	this->but_MUL->Visible = true;
	this->but_SUB->Visible = true;
	this->but_DIV->Visible = true;
	this->but_MOD->Visible = true;
	this->but_GCF->Visible = true;
	this->but_ABS->Visible = false;
	this->but_RED->Visible = false;
	this->but_INT->Visible = false;
	this->but_DIVI->Visible = false;
	this->but_LED->Visible = false;
	this->but_DEG->Visible = false;
	this->but_DER->Visible = false;
	this->but_FAC->Visible = false;
	this->but_NMP->Visible = false;
	Na = ABS_Z_N(Za);
	output();
}

private: System::Void but_MUL_Click(System::Object^ sender, System::EventArgs^ e) {
	if (logN || logZ)
		this->lab_help->Text = "Введите второе число и нажмите на знак равно";
	if (logQ)
		this->lab_help->Text = "Введите числитель второго числа, а затем нажмите на --- для ввода знаменателя";
	last_op = 6;
	logOp = 1;
	logDef = 0;
	logNum = 1;
	output();
}
private: System::Void but_DIV_Click(System::Object^ sender, System::EventArgs^ e) {
	if (logN || logZ)
		this->lab_help->Text = "Введите второе число и нажмите на знак равно";
	last_op = 7;
	logOp = 1;
	output();
}

private: System::Void but_MOD_Click(System::Object^ sender, System::EventArgs^ e) {
	if (logN || logZ)
		this->lab_help->Text = "Введите второе число и нажмите на знак равно";
	last_op = 8;
	logOp = 1;
	output();
}
private: System::Void but_GCF_Click(System::Object^ sender, System::EventArgs^ e) {
	if (logN || logZ)
		this->lab_help->Text = "Введите второе число и нажмите на знак равно";
	last_op = 9;
	logOp = 1;
	output();
}
private: System::Void but_LCM_Click(System::Object^ sender, System::EventArgs^ e) {
	if (logN || logZ)
		this->lab_help->Text = "Введите второе число и нажмите на знак равно";
	last_op = 10;
	logOp = 1;
	output();
}
private: System::Void but_NtoZ_Click(System::Object^ sender, System::EventArgs^ e) {
	logN = 0; logZ = 1; logQ = 0; logP = 0;
	this->label4->Text = "Целые";
	this->lab_help->Text = "Введите первое число";
	this->but_N->BackColor = System::Drawing::Color::DimGray;
	this->but_Z->BackColor = System::Drawing::Color::DarkOrange;
	this->but_R->BackColor = System::Drawing::Color::DimGray;
	this->but_P->BackColor = System::Drawing::Color::DimGray;
	this->but_x->Visible = false;
	this->but_den->Visible = false;
	this->but_minus->Visible = true;
	this->but_COM->Visible = false;
	this->but_NtoZ->Visible = false;
	this->but_ZtoN->Visible = true;
	this->but_ZtoR->Visible = true;
	this->but_RtoZ->Visible = false;
	this->but_POZ->Visible = true;
	this->but_ADD->Visible = true;
	this->but_ADD1->Visible = false;
	this->but_MULk->Visible = false;
	this->but_MUL10->Visible = false;
	this->but_MUL->Visible = true;
	this->but_SUB->Visible = true;
	this->but_DIV->Visible = true;
	this->but_MOD->Visible = true;
	this->but_GCF->Visible = false;
	this->but_LCM->Visible = false;
	this->but_ABS->Visible = true;
	this->but_RED->Visible = false;
	this->but_INT->Visible = false;
	this->but_DIVI->Visible = false;
	this->but_LED->Visible = false;
	this->but_DEG->Visible = false;
	this->but_DER->Visible = false;
	this->but_FAC->Visible = false;
	this->but_NMP->Visible = false;
	Za = TRANS_N_Z(Na);
	output();
}
private: System::Void but_ZtoN_Click(System::Object^ sender, System::EventArgs^ e) {
	logN = 1; logZ = 0; logQ = 0; logP = 0;
	this->label4->Text = "Натуральные";
	this->lab_help->Text = "Введите первое число";
	this->but_N->BackColor = System::Drawing::Color::DarkOrange;
	this->but_Z->BackColor = System::Drawing::Color::DimGray;
	this->but_R->BackColor = System::Drawing::Color::DimGray;
	this->but_P->BackColor = System::Drawing::Color::DimGray;
	this->but_x->Visible = false;
	this->but_den->Visible = false;
	this->but_minus->Visible = false;
	this->but_COM->Visible = true;
	this->but_NtoZ->Visible = true;
	this->but_ZtoN->Visible = false;
	this->but_ZtoR->Visible = false;
	this->but_RtoZ->Visible = false;
	this->but_POZ->Visible = true;
	this->but_ADD->Visible = true;
	this->but_ADD1->Visible = true;
	this->but_MULk->Visible = true;
	this->but_MUL10->Visible = true;
	this->but_MUL->Visible = true;
	this->but_SUB->Visible = true;
	this->but_DIV->Visible = true;
	this->but_MOD->Visible = true;
	this->but_GCF->Visible = true;
	this->but_LCM->Visible = true;
	this->but_RED->Visible = false;
	this->but_INT->Visible = false;
	this->but_DIVI->Visible = false;
	this->but_LED->Visible = false;
	this->but_DEG->Visible = false;
	this->but_DER->Visible = false;
	this->but_FAC->Visible = false;
	this->but_NMP->Visible = false;
	Na = TRANS_Z_N(Za);
	output();
}
private: System::Void but_INT_Click(System::Object^ sender, System::EventArgs^ e) {
	bool flag = 1;
	for (int i = 0; i < 20; i++)
	{
		if (Qa.def.q[i] != 0) flag = 0;
	}
	if (flag) {
		Qa.def.q[0] = 1;
	}
	if (INT_Q_B(Qa)) {
		this->lab_top->Text = "";
		this->lab_mid->Text = "Число целое";
		this->lab_bot->Text = "";
	}
	else {
		this->lab_top->Text = "";
		this->lab_mid->Text = "Число не целое";
		this->lab_bot->Text = "";
	}
}
private: System::Void but_RED_Click(System::Object^ sender, System::EventArgs^ e) {
	bool flag = 1;
	for (int i = 0; i < 20; i++)
	{
		if (Qa.def.q[i] != 0) flag = 0;
	}
	if (flag) {
		Qa.def.q[0] = 1;
	}
	Qa = RED_Q_Q(Qa);
	output();
}
private: System::Void but_DIVI_Click(System::Object^ sender, System::EventArgs^ e) {
	last_op = 11;
	logOp = 1;
	logDef = 0;
	logNum = 1;
	output();
}
private: System::Void but_ZtoR_Click(System::Object^ sender, System::EventArgs^ e) {
	logN = 0; logZ = 0; logQ = 1; logP = 0;
	logNum = 1; logDef = 0;
	this->label4->Text = "Рациональные";
	this->lab_help->Text = "Введите первое число";
	this->but_N->BackColor = System::Drawing::Color::DimGray;
	this->but_Z->BackColor = System::Drawing::Color::DimGray;
	this->but_R->BackColor = System::Drawing::Color::DarkOrange;
	this->but_P->BackColor = System::Drawing::Color::DimGray;
	this->but_x->Visible = false;
	this->but_den->Visible = true;
	this->but_minus->Visible = true;
	this->but_COM->Visible = false;
	this->but_NtoZ->Visible = false;
	this->but_ZtoN->Visible = false;
	this->but_ZtoR->Visible = false;
	this->but_RtoZ->Visible = true;
	this->but_POZ->Visible = false;
	this->but_ADD->Visible = true;
	this->but_ADD1->Visible = false;
	this->but_MULk->Visible = false;
	this->but_MUL10->Visible = false;
	this->but_MUL->Visible = true;
	this->but_SUB->Visible = true;
	this->but_DIV->Visible = false;
	this->but_MOD->Visible = false;
	this->but_GCF->Visible = false;
	this->but_LCM->Visible = false;
	this->but_ABS->Visible = false;
	this->but_RED->Visible = true;
	this->but_INT->Visible = true;
	this->but_DIVI->Visible = true;
	this->but_LED->Visible = false;
	this->but_DEG->Visible = false;
	this->but_DER->Visible = false;
	this->but_FAC->Visible = false;
	this->but_NMP->Visible = false;
	Qa = TRANS_Z_Q(Za);
	output();
}
private: System::Void but_RtoZ_Click(System::Object^ sender, System::EventArgs^ e) {
	logN = 0; logZ = 1; logQ = 0; logP = 0;
	this->label4->Text = "Целые";
	this->lab_help->Text = "Введите первое число";
	this->but_N->BackColor = System::Drawing::Color::DimGray;
	this->but_Z->BackColor = System::Drawing::Color::DarkOrange;
	this->but_R->BackColor = System::Drawing::Color::DimGray;
	this->but_P->BackColor = System::Drawing::Color::DimGray;
	this->but_x->Visible = false;
	this->but_den->Visible = false;
	this->but_minus->Visible = true;
	this->but_COM->Visible = false;
	this->but_NtoZ->Visible = false;
	this->but_ZtoN->Visible = true;
	this->but_ZtoR->Visible = true;
	this->but_RtoZ->Visible = false;
	this->but_POZ->Visible = true;
	this->but_ADD->Visible = true;
	this->but_ADD1->Visible = false;
	this->but_MULk->Visible = false;
	this->but_MUL10->Visible = false;
	this->but_MUL->Visible = true;
	this->but_SUB->Visible = true;
	this->but_DIV->Visible = true;
	this->but_MOD->Visible = true;
	this->but_GCF->Visible = false;
	this->but_LCM->Visible = false;
	this->but_ABS->Visible = true;
	this->but_RED->Visible = false;
	this->but_INT->Visible = false;
	this->but_DIVI->Visible = false;
	this->but_LED->Visible = false;
	this->but_DEG->Visible = false;
	this->but_DER->Visible = false;
	this->but_FAC->Visible = false;
	this->but_NMP->Visible = false;
	Za = TRANS_Q_Z(Qa);
	output();
}
private: System::Void but_DEG_Click(System::Object^ sender, System::EventArgs^ e) {
	sm= std::to_string(DEG_P_N(Pa));
	st = "";
	sd = "";
	this->lab_bot->Text = gcnew System::String(sd.c_str());
	this->lab_mid->Text = gcnew System::String(sm.c_str());
	this->lab_top->Text = gcnew System::String(st.c_str());
}
private: System::Void but_LED_Click(System::Object^ sender, System::EventArgs^ e) {
	Qa = LED_P_Q(Pa);
	logQ = 1; logP = 0;
	output();
	logQ = 0; logP = 1;
}
private: System::Void but_DER_Click(System::Object^ sender, System::EventArgs^ e) {
	Pa = DER_P_P(Pa);
	output();
}
private: System::Void but_NMP_Click(System::Object^ sender, System::EventArgs^ e) {
	Pa = NMR_P_P(Pa);
	output();
}
private: System::Void but_FAC_Click(System::Object^ sender, System::EventArgs^ e) {
	Q qt;
	int i, j;
	Qa = FAC_P_Q(Pa);
	qt = Qa;
	for (i = 0; i < 20; i++) {
		for (j = 0; j < 9; j++) {
			st = std::to_string(qt.num.q[i] % 10) + st;
			sd = std::to_string(qt.def.q[i] % 10) + sd;
			qt.num.q[i] /= 10;
			qt.def.q[i] /= 10;
		}
	}
	while (st[0] == '0' && st.size() > 1) {
		st.erase(0, 1);
	}
	while (sd[0] == '0' && sd.size() > 1) {
		sd.erase(0, 1);
	}
	if (sd.size() == 1 && sd == "0") {
		sd = "1";
	}
	for (i = 0; i < std::max(sd.size(), st.size()); i++) {
		sm = "—" + sm;
	}
	while (st.size() < sm.size()) {
		st = " " + st;
	}
	while (sd.size() < sm.size()) {
		sd = " " + sd;
	}
	st = "НОД числителей   " + st;
	sm = "—————————————————" + sm;
	sd = "НОК знаменателей " + sd;
	this->lab_bot->Text = gcnew System::String(sd.c_str());
	this->lab_mid->Text = gcnew System::String(sm.c_str());
	this->lab_top->Text = gcnew System::String(st.c_str());
}

private: System::Void but_equal_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lab_help->Text = "Выберите операцию снова или нажмите С для сброса";
	bool flag = 1;
	if (logQ) {
		for (int i = 0; i < 20; i++)
		{
			if (Qa.def.q[i] != 0) flag = 0;
		}
		if (flag) {
			Qa.def.q[0] = 1;
		}
		flag = 1;
		for (int i = 0; i < 20; i++)
		{
			if (Qb.def.q[i] != 0) flag = 0;
		}
		if (flag) {
			Qb.def.q[0] = 1;
		}
	}
	if (logP) {
		for (int i = 0; i < 20; i++)
		{
			if (Pa.coef[0].def.q[i] != 0) flag = 0;
		}
		if (flag) {
			Pa.coef[0].def.q[0] = 1;
		}
		flag = 1;
		for (int i = 0; i < 20; i++)
		{
			if (Pb.coef[0].def.q[i] != 0) flag = 0;
		}
		if (flag) {
			Pb.coef[0].def.q[0] = 1;
		}
	}
	if (last_op == 1) {
		int s = COM_NN_D(Na, Nb);
		if (s == 2) this->lab_mid->Text = "Первое число больше второго";
		if (s == 0) this->lab_mid->Text = "Числа равны";
		if (s == 1) this->lab_mid->Text = "Второе число больше первого";
		logOp = 0;
	}
	if (last_op == 2) {
		if (logN) {
			Na = ADD_NN_N(Na, Nb);
			logOp = 0;
			output();
		}
		if (logZ) {
			Za = ADD_ZZ_Z(Za, Zb);
			logOp = 0;
			output();
		}
		if (logQ) {
			Qa = ADD_QQ_Q(Qa, Qb);
			logOp = 0;
			output();
		}
		if (logP) {
			Pa = ADD_PP_P(Pa, Pb);
			logOp = 0;
			output();
		}
	}
	if (last_op == 3) {
		if (logN) {
			Na = SUB_NN_N(Na, Nb);
			logOp = 0;
			output();
		}
		if (logZ) {
			Za = SUB_ZZ_Z(Za, Zb);
			logOp = 0;
			output();
		}
		if (logQ) {
			Qa = SUB_QQ_Q(Qa, Qb);
			logOp = 0;
			output();
		}
		if (logP) {
			Pa = SUB_PP_P(Pa, Pb);
			logOp = 0;
			output();
		}
	}
	if (last_op == 4) {
		if (logN) {
			Na = MUL_ND_N(Na, Nb.q[0]);
			logOp = 0;
			logK = 0;
			output();
		}
		if (logP) {
			Pa = MUL_PQ_P(Pa, Pa.coef[0]);
			logOp = 0;
			output();
		}
	}
	if (last_op == 5) {
		if (logN) {
			Na = MUL_Nk_N(Na, Nb.q[0]);
			logOp = 0;
			output();
		}
		if (logP) {
			Pa = MUL_Pxk_P(Pa, Pb.coef[0].num.q[0]);
			logOp = 0;
			output();
		}
	}
	if (last_op == 6) {
		if (logN) {
			Na = MUL_NN_N(Na, Nb);
			logOp = 0;
			output();
		}
		if (logZ) {
			Za = MUL_ZZ_Z(Za, Zb);
			logOp = 0;
			output();
		}
		if (logQ) {
			Qa = MUL_QQ_Q(Qa, Qb);
			logOp = 0;
			output();
		}
	}
	if (last_op == 7) {
		if (logN) {
			Na = DIV_NN_N(Na, Nb);
			logOp = 0;
			output();
		}
		if (logZ) {
			Za = DIV_ZZ_Z(Za, Zb);
			logOp = 0;
			output();
		}
		if (logP) {
			Pa = DIV_PP_P(Pa, Pb);
			logOp = 0;
			output();
		}
	}
	if (last_op == 8) {
		if (logN) {
			Na = MOD_NN_N(Na, Nb);
			logOp = 0;
			output();
		}
		if (logZ) {
			Za = MOD_ZZ_Z(Za, Zb);
			logOp = 0;
			output();
		}
		if (logP) {
			Pa = MOD_PP_P(Pa, Pb);
			logOp = 0;
			output();
		}
	}
	if (last_op == 9) {
		if (logN) {
			Na = GCF_NN_N(Na, Nb);
			logOp = 0;
			output();
		}
		if (logP) {
			Pa = GCF_PP_P(Pa, Pb);
			logOp = 0;
			output();
		}
	}
	if (last_op == 10) {
		if (logN) {
			Na = LCM_NN_N(Na, Nb);
			logOp = 0;
			output();
		}
	}
	if (last_op == 11) {
		if (logQ) {
			Qa = DIV_QQ_Q(Qa, Qb);
			logOp = 0;
			output();
		}
	}
}

int COM_NN_D(N r, N l) {
	if (r.n > l.n) return 2;
	else if (r.n < l.n) return 1;
	else {
		 for (int i = 0; i < r.n; ++i) {
			if (r.q[i] > l.q[i]) return 2;
			else if (r.q[i] < l.q[i]) return 1;
		 }
			return 0;
	}
}

bool NZER_N_B(N r) {
	for (int i = 0; i < 20; ++i) {
		if (r.q[i] != 0) return true;
	}
	return false;
}

N ADD_1N_N(N r) {
	int d = 1;
	for (int i = 0; i <= 20 ; ++i) {
		r.q[i] += d;
		d = 0;
		if (r.q[i] > 999999999) {
			d = r.q[i] / 1000000000;
			r.q[i] %= 1000000000;
		}
		else break;
	}
	r.n = 0;
	for (int i = 19; i >= 0; --i) {
		if (r.n == 0) {
			if (r.q[i] != 0) {
				d = r.q[i];
				while (d > 0) {
					r.n++;
					d /= 10;
				}
			}
		}
		else {
			r.n += 9;
		}
	}
	return r;
}

N ADD_NN_N(N r, N l) {
	int d = 0;
	for (int i = 0; i <= 20; ++i) {
		r.q[i] += l.q[i]+d;
		d = r.q[i] / 1000000000;
		r.q[i] %= 1000000000;
	}
	r.n = 0;
	for (int i = 19; i >= 0; --i) {
		if (r.n == 0) {
			if (r.q[i] != 0) {
				d = r.q[i];
				while (d > 0) {
					r.n++;
					d /= 10;
				}
			}
		}
		else {
			r.n += 9;
		}
	}
	return r;
}
N SUB_NN_N(N r, N l) {
	int d = 1;
	for (int i = 0; i <= 20; ++i) {
		--r.q[i];
		r.q[i] += d;
		r.q[i] += 1000000000;
		r.q[i] -= l.q[i];
		d = r.q[i] / 1000000000;
		r.q[i] %= 1000000000;
	}
	r.n = 0;
	for (int i = 19; i >= 0; --i) {
		if (r.n == 0) {
			if (r.q[i] != 0) {
				d = r.q[i];
				while (d > 0) {
					r.n++;
					d /= 10;
				}
			}
		}
		else {
			r.n += 9;
		}
	}
	return r;
}

N MUL_ND_N(N r, int k) {
	int d = 0, x;
	for (int i = 0; i < 20; ++i) {
		x = r.q[i] / 100000000;
		r.q[i] %= 100000000;
		r.q[i] *= k;
		r.q[i] += d;
		r.q[i] += ((x * k) % 10) * 100000000;
		d = (x * k) / 10;
	}
	r.n = 0;
	for (int i = 19; i >= 0; --i) {
		if (r.n == 0) {
			if (r.q[i] != 0) {
				d = r.q[i];
				while (d > 0) {
					r.n++;
					d /= 10;
				}
			}
		}
		else {
			r.n += 9;
		}
	}
	return r;
}

N MUL_Nk_N(N r, int x) {
	for (int i = 0; i < x; i++) {
		r = MUL_ND_N(r, 10);
	}
	return r;
}

N MUL_NN_N(N r, N l) {
	N t;
	int x;
	for (int i = 0; i < 20; i++) {
		t.q[i] = 0;
	}
	t.n = r.n;
	int k = 0;
	for (int i = 0; i < 20; ++i) {
		while(r.q[i]>0){
			x = r.q[i] % 10;
			r.q[i] /= 10;
			t = ADD_NN_N(t, MUL_Nk_N(MUL_ND_N(l, x), k));
			k++;
		}
	}
	r = t;
	return r;
}

N SUB_NDN_N(N r, N l, int k) {
	r = SUB_NN_N(r, MUL_ND_N(l, k));
	return r;
}

int DIV_NN_Dk(N r, N l, int k) {
	int i = 1;
	N cur = MUL_Nk_N(l, k);
	while (i < 10 && COM_NN_D(r, MUL_ND_N(cur, i)) != 1) {
		++i;
	}
	return i;
}
N DIV_NN_N(N r, N l) {
	N res;
	int d;
	for (int i = 0; i < 20; i++) {
		res.q[i] = 0;
	}
	while (COM_NN_D(r, l) != 1) {
		r = SUB_NN_N(r, l);
		res = ADD_1N_N(res);
	}
	res.n = 0;
	for (int i = 19; i >= 0; --i) {
		if (res.n == 0) {
			if (res.q[i] != 0) {
				d = res.q[i];
				while (d > 0) {
					res.n++;
					d /= 10;
				}
			}
		}
		else {
			res.n += 9;
		}
	}
	return res;
}
N MOD_NN_N(N r, N l) {
	N k = DIV_NN_N(r, l);
	N res = MUL_NN_N(l, k);
	r = SUB_NN_N(r, res);
	return r;
}
N GCF_NN_N(N r, N l) {
	if (COM_NN_D(r, l) == 1) {
		N t = r;
		r = l;
		l = t;
	}
	N t = MOD_NN_N(r, l);
	if (!NZER_N_B(t)) return l;
	return GCF_NN_N(t, l);
}
N LCM_NN_N(N r, N l) {
	return DIV_NN_N(MUL_NN_N(r, l), GCF_NN_N(r, l));
}
int POZ_Z_D(Z ch)
{
	int d;
	int i, flag;

	flag = 0;
	for (i = 0; i < 20; i++)
		if (ch.q[i] != 0) flag = 1;
	if (flag == 0) d = 0;
	else
		if (ch.d == 1) d = 1;
		else d = 2;
	return d;
}
Z MUL_ZM_Z(Z ch)
{
	if (ch.d == 0)
		ch.d = 1;
	else ch.d = 0;
	return ch;
}
Z TRANS_N_Z(N ch1)
{
	int i;
	Z ch2;
	ch2.d = 0;
	ch2.n = ch1.n;
	for (i = 0; i < 20; i++)
		ch2.q[i] = ch1.q[i];
	return ch2;
}
N TRANS_Z_N(struct Z ch1)
{
	int i;
	N ch2;
	ch2.n = ch1.n;
	for (i = 0; i < 20; i++)
		ch2.q[i] = ch1.q[i];
	return ch2;
}
N ABS_Z_N(Z ch1)
{
	N ch2;
	ch2 = TRANS_Z_N(ch1);
	return ch2;
}
Z ADD_ZZ_Z(Z ch_1, Z ch_2)
{
	Z sum;
	N bol_ch;
	N men_ch;
	N help_ch;
	N summa;
	int zn  /*знак ответа*/, flag;

	flag = 0;

	bol_ch = ABS_Z_N(ch_1); /*пусть большее число - модуль первого*/
	men_ch = ABS_Z_N(ch_2); /*пусть меньшее число - модуль второго*/

	if (COM_NN_D(bol_ch, men_ch) == 1) /*если первое меньше второго*/
	{
		help_ch = bol_ch; /*то меняем их местами*/
		bol_ch = men_ch;
		men_ch = help_ch;
		flag = 1; /*подняли флаг, потому что мы поменяли местами*/
	} /*если числа равны, то все хорошо*/

	if (POZ_Z_D(ch_1) == POZ_Z_D(ch_2)) /*если знаки одинаковые*/
	{
		if (POZ_Z_D(ch_1) == 2) /*оба числа положительные*/
		{
			zn = 0;
		}
		else if (POZ_Z_D(ch_1) == 1) /*оба числа отрицательные*/
		{
			zn = 1;
		}
		summa = ADD_NN_N(bol_ch, men_ch);/*если числа одинаковых знаков, то мы складываем их модули*/
	}
	else  /*если знаки разные*/
	{
		if (flag == 0) /*числа стоят на своих местах*/
		{
			zn = ch_1.d; /*берем знак большего по модулю числа*/
		}
		else /*числа были переставлены*/
		{
			zn = ch_2.d; /*берем знак большего по модулю числа*/
		}
		summa = SUB_NN_N(bol_ch, men_ch); /*если знаки разные, то вычитаем из большего по модулю меньшее*/
	}
	sum.n = summa.n; /*переводим из натурального числа в целое и выбираем знак*/
	for (int i = 0; i < 20; i++) {
		sum.q[i] = summa.q[i];
	}
	
	sum.d = zn;
	return sum;
}
Z SUB_ZZ_Z(Z ch1, Z ch2)
{
	ch2 = MUL_ZM_Z(ch2);
	return ADD_ZZ_Z(ch1, ch2);
}

Z MUL_ZZ_Z(Z ch1, Z ch2)
{
	N a, b, c;
	Z ch3;
	a = TRANS_Z_N(ch1);
	b = TRANS_Z_N(ch2);
	c = MUL_NN_N(a, b);
	ch3 = TRANS_N_Z(c);
	ch3.d = (ch1.d + ch2.d) % 2;
	return ch3;
}

//Григорьева виктория 9306
Z DIV_ZZ_Z(Z ch1, Z ch2)
{
	Z ch3;
	N a, b, c;
	string stt;
	a = TRANS_Z_N(ch1);
	b = TRANS_Z_N(ch2);
	c = DIV_NN_N(a, b);
	if (POZ_Z_D(ch1) == 1 && POZ_Z_D(ch2) == 2)
	{
		c = ADD_1N_N(c);
		ch3 = TRANS_N_Z(c);
		ch3.d = 1;
	}
	if (POZ_Z_D(ch1) == 2 && POZ_Z_D(ch2) == 1)
	{
		ch3 = TRANS_N_Z(c);
		ch3.d = 1;
	}
	if (POZ_Z_D(ch1) == 1 && POZ_Z_D(ch2) == 1)
	{
		c = ADD_1N_N(c);
		ch3 = TRANS_N_Z(c);
		ch3.d = 0;
	}
	if (POZ_Z_D(ch1) == 2 && POZ_Z_D(ch2) == 2)
	{
		ch3 = TRANS_N_Z(c);
		ch3.d = 0;
	}
	return ch3;
}

//Шерстнев Андрей 9306
Z MOD_ZZ_Z(Z r, Z l)
{
	Z k = DIV_ZZ_Z(r, l);
	Z res = MUL_ZZ_Z(l, k);
	r = SUB_ZZ_Z(r, res);
	return r;
}

// Королев Дмитрий 9306
Q RED_Q_Q(Q a)
{
	Q c;// Возвращаемое рациональное число
	N x;// НОД числителя и знаменателя
	bool flag=true;// Логическая переменная
	x = GCF_NN_N(ABS_Z_N(a.num), a.def);
	a.num = DIV_ZZ_Z(a.num, TRANS_N_Z(x));// Делим числитель
	a.def = DIV_NN_N(a.def, x);// Делим знаменатель
	c.num = a.num;
	c.def = a.def;
	return c;
}

// Королев Дмитрий 9306
Q TRANS_Z_Q(Z a)
{
	Q c;// Возвращаемая дробь
	c.num = a;// Числитель равен начальному целому числу
	c.def.q[0] = 1;// Первый разряд знаменателя равен 1
	for (int i = 1; i < 20; i++)// Остальные разряд знаменателя приравниваем к 0
	{
		c.def.q[i] = 0;
	}
	return c;
}

// Королев Дмитрий 9306
Q ADD_QQ_Q(Q a, Q b)
{
	Q c;// Возвращаемая дробь
	c.num = ADD_ZZ_Z(MUL_ZZ_Z(a.num, TRANS_N_Z(b.def)), MUL_ZZ_Z(b.num, TRANS_N_Z(a.def)));// Числитель
	c.def = MUL_NN_N(a.def, b.def);// Знаменатель
	return RED_Q_Q(c);// Возвращаем сокращенную дробь
}

// Королев Дмитрий 9306
Q MUL_QQ_Q(Q a, Q b)
{
	Q c;// Возвращаемая дробь
	c.num = MUL_ZZ_Z(a.num, b.num);// Числитель
	c.def = MUL_NN_N(a.def, b.def);// Знаменатель
	return RED_Q_Q(c);// Возвращаем сокращенную дробь
}

/*Кучин Иван 9306*/
bool INT_Q_B(Q a)
{
	bool k, flag = true;/*Возвращаемая переменная*/
	a = RED_Q_Q(a);/*Сокарщение дроби*/
	for (int i = 1; i < 20; i++)/*Проверка что все разряды кроме первого у знаменателя равны 0*/
	{
		if (a.def.q[i] != 0) flag = false;
	}
	if (a.def.q[0] == 1 && flag)/*Проверка что знаменатель равен 1*/
	{
		k = true;/*Положительный ответ*/
	}
	else
	{
		k = false;/*Отрицательный ответ*/
	}
	return k;
}
/*Кучин Иван 9306*/
Z TRANS_Q_Z(Q a)
{
	Z n;/*Возвращаемое целое число*/
	bool flag = 1;
	a = RED_Q_Q(a);/*Сокращаение дроби*/
	if (INT_Q_B(a))/*Проверка что знаеменатель равен 1*/
	{
		n = a.num;/*Присваивание возвращаемому целому числу значение знаменателя*/
	}
	return n;
}

/*Кучин Иван 9306*/
Q SUB_QQ_Q(Q a, Q b)
{
	Q n;/*Возвращаемая дровь*/
	n.num = SUB_ZZ_Z(MUL_ZZ_Z(a.num, TRANS_N_Z(b.def)), MUL_ZZ_Z(b.num, TRANS_N_Z(a.def)));/*Числитель целое число*/
	n.def = MUL_NN_N(a.def, b.def);/*знаменатель*/
	return RED_Q_Q(n);/* Возвращается сокращенная дробь*/
}

/*Кучин Иван 9306*/
Q DIV_QQ_Q(Q a, Q b)
{
	Q n;/*Возращаемая дробь*/
	if (POZ_Z_D(b.num) != 0)
	{
		n.num = MUL_ZZ_Z(a.num, TRANS_N_Z(b.def));/*числитель*/
		n.def = MUL_NN_N(a.def, TRANS_Z_N(b.num));/*знаменатель*/
		n = RED_Q_Q(n);/*Cокращенная дробь*/
	}
	return n;
}

P MUL_Pxk_P(P p, int k) // 9306 Ковтун Роман
{
	int i, j;
	p.n += k;
	for (i = M - 1; i <= k; i--)
		p.coef[i] = p.coef[i - k]; // перемещение коэффициентов на k индексов вперёд
	for (i = 0; i < k; i++)
	{
		p.coef[i].num.d = 0;
		p.coef[i].num.n = 0;     // зануление коэффицентов, которые остались не задействованными
		for (j = 0; j < M; j++)
			p.coef[i].num.q[j] = 0;
	}
	return p;
}

Q LED_P_Q(P p) // 9306 Ковтун Роман
{
	int i;
	i = M - 1;
	while ((p.coef[i].num.n == 0) && (i >= 0))
		i--; // поиск максимального индекса массива кэффициентов - такого, что количество разрядов его числителя не равно 0
	return(p.coef[i]);
}

int DEG_P_N(P p) // 9306 Ковтун Роман
{
	int i;
	i = M - 1;
	while ((p.coef[i].num.n == 0) && (i >= 0))
		i--; // поиск максимального индекса массива кэффициентов такого, что количество разрядов его числителя не равно 0
	p.n = i;
	return (p.n);
}

Q MUL_Qn_Q(int n, Q r) // Ковтун Роман - Функции нет в списке, она перемножает недлинное натуральное n и длинное рациональное r
{ // ЧТОБЫ ПРОВЕРИТЬ РАБОТОСПОСОБНОСТЬ, НАДО ЗАКОМЕНТИТЬ ЧАСТЬ КОДА, ГДЕ ИДЁТ РАБОТА С w И СДЕЛАТЬ ФУНКЦИЮ ВОЙДОВОЙ!!!
	int i, j, k1, k2, m, m1, a, b, c, c1, c2, f, f1, g, v, x1, x2, x3, s;
	Q t[K], w;
	m = r.num.n / K; //целое от деления на максимальное количество цифр в одном элементе массива необходиммо для того, чтобы посчитать количество элементов массива t.num.q[], которые будут заполнены
	m1 = r.num.n % K;
	if (m1 != 0) // если остаток от деления не равен 0, это значит, что помимо m элементов массива r.num.q[] частично заполнен и эм-плюс-первый элемент, поэтому общее количество рабочих элементов увеличится на 1
		m++;
	v = 0;
	k2 = n;
	for (i = 0; i < K; i++)
		for (j = 0; j < M; j++)
		{
			t[i].num.q[j] = 0;
		}
	while (k2 != 0)             // цикл идёт столько, сколько цифр у недлинного множителя
	{
		f1 = 1;
		g = 0;
		b = 0;
		k1 = k2 % 10;          // текущая цифра числа n, на которую умножается число r.num.q[i]
		for (i = 0; i < m; i++)  // цикл идёт столько, сколько необходимо элементов массива q[] для кодирования длинного числа (пока что, без учёта смещения числа при делении в столбик)
		{                      //
			if (i == m - 1)
				g = m * K - r.num.n; // количество свободных разрядов в последнем рабочем элементе массива r.num.q[]
			f = 1;
			c2 = r.num.q[i];
			for (j = 0; j < K - g; j++)  // цикл продолжается столько, сколько заполнено разрядов числа текущего элемента массива r.num.q[]
									   // (во всех, кроме последнего, будет длится К раз, последний - может быть заполнен не полностью)
			{
				c1 = c2 % 10;          // последняя цифра числа r.num.q[]
				c = c1 * k1 + b;       // число, получившееся при умножении текущих цифр-множителей + количество десятков предыдущей операции (изначально == 0)
				a = c % 10;            // последняя цифра числа с (именно с ней ведётся работа в цикле)
				b = c / 10;            // первая цифра числа с (количество десятков, т.к. максимально возможное число при умножении в стобик 2х цифр с учётом предыдущей операции == 89)
				t[v].num.q[i] += a * f;  // получение числа, из набора полученных цифр путём умножения их на текущую степень 10 (степень равна текущему разряду числа)
				f *= 10;               // получения актуальной степени 10
				c2 /= 10;              // уничтожение последней цифры
			}
		}
		if (g > 0)                     // если в m-1 элементе t.num.q[] ещё есть свободный разряд
		{
			t[v].num.q[m - 1] += b * f;    // то к текущему элементу добавляется неучтённый в цикле последний разряд
		}
		else
		{
			t[v].num.q[m] = b;        // иначе (когда элемент полностью заполнен) следующему элементу присваивается неучтённыый разряд, но для нового (пустого) элемента это будет нулевой разряд
			m++;                      // учёт выделения нового элемента массива t.num.q[]
		}
		t[v].num.n = r.num.n + !!b;   // формирование количества цифр в знаменателе t.num (!!b вернёт 0, если b == 0, в остальных же случаях - 1, это учйт последнего разряда)
		x1 = 1;
		x2 = 1;
		x3 = 1;
		if ((K - v) > v)              // ----
			for (s = 0; s < K - v; s++)//       |
			{//                              |      Для того, чтобы правильно посчитать число, необходимо сместить его на v разрядов вправо (то есть на 10^v = х2):
				if (s < v)//                 |
				{//                          |                     123456789
					x1 *= 10;//              |                           111
					x2 *= 10;//              |                     ---------     здесь происходит смещение на:
				}//                          |                     123456789 <-- 10^0
				else//                       |                    1234567890 <-- 10^1
					x1 *= 10;//              |                   12345678900 <-- 10^2
			}//                              |
		else//                                >     Но чтобы иметь возможность сместить число, умножая его на х2, надо учитывать количество свободных разрядов последнего элемента:
			for (s = 0; s < v; s++)//         |
			{//                              |        ***111111 111111111 111111111 <-- на количество "*" (== g) можно сместить число, не переходя в новый элемент массива t.num.q[]
				if (s < K - v)//             |
				{//                          |      x1 - разряды, которые останутся, х2 - разряды, которые переносятся на следующий элемент массива t.num.q[]
					x1 *= 10;//              |      Допустим, надо переместить число на 3 разряда:
					x2 *= 10;//              |
				}//                          |          ********* **1111111 111111111 , тогда x1 = 10^6, x2 = 10^3, но надо учесть, то, что сейчас возможно перемещение лишь на 2 разряда,
				else//                       |          ********1 ***111111 111111111 , для того, чтобы осуществить перемещение на 3 разряда, надо сначала переместить "вылезающие" разряды на новый элементмассива t.num.q[]
					x2 *= 10;//              |          ********1 111111000 111111111 , теперь можно проводить операцию по перемещению
			}//                              |          ********1 111111111 ***111000 ,
		g = m * K - r.num.n;//                 |          ********1 111111111 111111000
		if (g - v >= 0)//                    |
		{//                                  |
			for (i = m - 1; i > 0; i--)//        |
			{//                              |
				t[v].num.q[i] *= x2;//        -------------
				t[v].num.q[i] += t[v].num.q[i - 1] / x1;//   |
				t[v].num.q[i - 1] %= x1;//                   |
			}//                                            |
			t[v].num.q[i] *= x2;//                         |
		}//                                                |
		else//                                             |
		{//                                                |
			for (s = 0; s < K - (v - g); s++)//              |
				x3 *= 10;//                                |
			t[v].num.q[m] = t[v].num.q[m - 1] / x3;//       |
			t[v].num.q[m - 1] %= x3;//                       |
			for (i = m - 1; i > 0; i--)//                      |
			{//                                            |
				t[v].num.q[i] *= x2;//                     |
				t[v].num.q[i] += t[v].num.q[i - 1] / x1;//   |
				t[v].num.q[i - 1] %= x1;//                   |
			}//                                            |
			t[v].num.q[i] *= x2;//                         |
			m++;//                                         |
		}//                                                |
		k2 /= 10;//                                        |
		puts("");//                                        |
		for (s = m - 1; s >= 0; s--)//                         |
			printf("%d ", t[v].num.q[s]);//                 |
		puts("");//                                        |
		v++;//                                             |
	}//----------------------------------------------------

	w = r;
	w.num.n = 0;
	for (i = 0; i < M; i++)
		w.num.q[i] = 0;
	for (i = 0; i <= v; i++)
		w = ADD_QQ_Q(w, t[i]);

	return w;
}

P DER_P_P(P p) // 9306 Ковтун Роман
{
	int i, j, k;
	P t;
	int r[M][M];//----------------------------------------------------------------------------------------------------------------------
	for (i = 0; i < M; i++)
		for (j = 0; j < M; j++)
		{
			if (i == j - 1)                                       // Формирование матрицы перехода r к производной массива коэффициентов
				r[i][j] = i;
			else
				r[i][j] = 0;
		}//-----------------------------------------------------------------------------------------------------------------------------
	//t.n = p.n - 1; // производная понижает степень многочлена на 1
	for (i = 0; i < M; i++)//-------------------------------------------------------------------------------------------------------------
		for (j = 0; j < M; j++)
			t.coef[i] = ADD_QQ_Q(t.coef[i], MUL_Qn_Q(r[i][j], p.coef[i]));          // Умножение матрицы перехода и матрицы изначальных коэффициентов
	t.n = DEG_P_N(t);
	return t;//-------------------------------------------------------------------------------------------------------------------------
}

P ADD_PP_P(P p, P q)  // Ковтун Роман 9306
{
	P a;
	int r, i; //-----------------------------------------------------------------------------------------------------------
	for (i = 0; i < 20; i++)
		a.coef[i] = ADD_QQ_Q(p.coef[i], q.coef[i]); // сложение коэффициентов, при степенях меньшего многочлена (т.к. бОльшие стеепени останутся неизменными)
	a.n = DEG_P_N(a);
	return a;
}

P SUB_PP_P(P p, P q)  // Ковтун Роман 9306
{
	P a;
	int i; //-----------------------------------------------------------------------------------------------------------
	for (i = 0; i < 20; i++)
		a.coef[i] = SUB_QQ_Q(p.coef[i], q.coef[i]); // разность коэффициентов, при степенях меньшего многочлена (т.к. бОльшие стеепени останутся неизменными)
	a.n = DEG_P_N(a); // учёт смены степени (например, когда умножаем на 0)
	return a;
}

P MUL_PQ_P(P p, Q q) // Ковтун Роман 9306
{
	int i;
	for (i = 0; i < 20; i++)
	{
		MUL_QQ_Q(p.coef[i], q);
	}
	return (p);
}
// 
Q FAC_P_Q(P p)
{
	int i, j;
	N a[M];
	N w;
	N b[M];
	N v;
	Q q;

	q.def.n = 0;
	for (i = 0; i < 20; i++)
		q.def.q[i] = 0;
	for (i = 0; i <= p.n; i++)
	{
		a[i] = TRANS_Z_N(p.coef[i].num);
		b[i] = p.coef[i].def;
	}
	for (i = 0; i <= p.n - 1; i++)
	{
		for (j = i + 1; j <= p.n; j++)
		{
			w = GCF_NN_N(w, GCF_NN_N(a[i], a[j]));
			v = GCF_NN_N(v, GCF_NN_N(b[i], b[j]));
		}
	}
	q.num = TRANS_N_Z(w);
	for (i = 0; i <= p.n; i++)
	{
		b[i] = DIV_NN_N(b[i], v);
		q.def = MUL_NN_N(q.def, b[i]);
	}
	return q;
}

P MUL_PP_P(P p, P q)
{
	P a;
	int i, j;
	Q s[M];
	NULL_P(a);
	for (i = 0; i <= p.n; i++)
	{
		for (j = 0; j <= q.n; j++)
		{
			a.coef[i + j] = ADD_QQ_Q(a.coef[i + j], MUL_QQ_Q(p.coef[i], q.coef[j]));
		}
	}
	a.n = DEG_P_N(a);
	return (a);
}

P DIV_PP_P(P p, P q)
{
	int i, j, k, deg_p, deg_q;
	P t, w, v;
	deg_p = DEG_P_N(p);
	deg_q = DEG_P_N(q);
	w = p;
	v = q;
	i = deg_p - deg_q;
	t.n = i;
	while (i >= 0)
	{
		t.coef[i] = RED_Q_Q(DIV_QQ_Q(LED_P_Q(w), LED_P_Q(q)));
		v = MUL_Pxk_P(MUL_PQ_P(q, t.coef[i]), i);
		w = SUB_PP_P(w, v);
		deg_p = DEG_P_N(w);
		deg_q = DEG_P_N(v);
		i = deg_p - deg_q;
	}
	t.n = DEG_P_N(t);
	return t;
}

P MOD_PP_P(P p, P q)
{
	P t;
	t = SUB_PP_P(p, MUL_PP_P(DIV_PP_P(p, q), q));
	return t;
}

P GCF_PP_P(P p, P q)
{
	P t, w, v;
	w = p;
	v = q;
	while ((w.n != 0) && (w.coef[0].num.n != 0) && (v.n != 0) && (v.coef[0].num.n != 0))
	{
		if (w.n > v.n)
			w = MOD_PP_P(w, v);
		else
			v = MOD_PP_P(v, w);
	}
	t = v;
	if (w.n != 0)
		t = w;
	return t;
}

P NMR_P_P(P p)
{
	return (DIV_PP_P(p, GCF_PP_P(p, DER_P_P(p))));
}

void NULL_P(P a)
{
	int i, j;
	a.n = 0;
	for (i = 0; i < M; i++)
	{
		a.coef[i].num.d = 0;
		a.coef[i].num.n = 0;
		a.coef[i].def.n = 1;
		for (j = 0; j < M; j++)
		{
			a.coef[i].num.q[j] = 0;
			a.coef[i].def.q[j] = 0;
		}
		for (i = 1; i < 20; i++) {
			a.coef[0].def.q[i] = 1;
		}
		a.coef[0].def.q[0] = 1;
	}
}







};
};