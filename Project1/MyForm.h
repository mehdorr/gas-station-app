#pragma once

namespace Project1 {

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
		void updateStockInfo(System::Windows::Forms::Label^ labPetrol, System::Windows::Forms::Label^ labDiesel, System::Windows::Forms::Label^ labLPG, System::Windows::Forms::Label^ labSoda, System::Windows::Forms::Label^ labSandwich, System::Windows::Forms::Label^ labSnack);
		void checkPrice(System::Windows::Forms::TextBox^ fuelBox, System::Windows::Forms::NumericUpDown^ sodaAmt, System::Windows::Forms::NumericUpDown^ sandwichAmt, System::Windows::Forms::NumericUpDown^ snackAmt, System::Windows::Forms::ComboBox^ combo, System::Windows::Forms::Label^ priceLabel);
		void sale(System::Windows::Forms::TextBox^ fuelBox, System::Windows::Forms::NumericUpDown^ sodaAmt, System::Windows::Forms::NumericUpDown^ sandwichAmt, System::Windows::Forms::NumericUpDown^ snackAmt, System::Windows::Forms::ComboBox^ combo);

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
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textFuelAmt;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboFuelType;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  tick;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;







	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  stockSnack;

	private: System::Windows::Forms::Label^  stockSandwich;

	private: System::Windows::Forms::Label^  stockSoda;

	private: System::Windows::Forms::Label^  stockLPG;

	private: System::Windows::Forms::Label^  stockDiesel;

	private: System::Windows::Forms::Label^  stockPetrol;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  totalPrice;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::NumericUpDown^  sodaAmt;
	private: System::Windows::Forms::NumericUpDown^  sandwichAmt;
	private: System::Windows::Forms::NumericUpDown^  snackAmt;




	private: System::ComponentModel::IContainer^  components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->totalPrice = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->stockSnack = (gcnew System::Windows::Forms::Label());
			this->stockSandwich = (gcnew System::Windows::Forms::Label());
			this->stockSoda = (gcnew System::Windows::Forms::Label());
			this->stockLPG = (gcnew System::Windows::Forms::Label());
			this->stockDiesel = (gcnew System::Windows::Forms::Label());
			this->stockPetrol = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textFuelAmt = (gcnew System::Windows::Forms::TextBox());
			this->comboFuelType = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->sodaAmt = (gcnew System::Windows::Forms::NumericUpDown());
			this->sandwichAmt = (gcnew System::Windows::Forms::NumericUpDown());
			this->snackAmt = (gcnew System::Windows::Forms::NumericUpDown());
			this->tick = (gcnew System::Windows::Forms::Timer(this->components));
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sodaAmt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sandwichAmt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->snackAmt))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 11;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->totalPrice, 4, 7);
			this->tableLayoutPanel1->Controls->Add(this->label3, 3, 7);
			this->tableLayoutPanel1->Controls->Add(this->label15, 8, 7);
			this->tableLayoutPanel1->Controls->Add(this->label14, 8, 6);
			this->tableLayoutPanel1->Controls->Add(this->label13, 8, 5);
			this->tableLayoutPanel1->Controls->Add(this->label12, 8, 4);
			this->tableLayoutPanel1->Controls->Add(this->label11, 8, 3);
			this->tableLayoutPanel1->Controls->Add(this->label10, 8, 2);
			this->tableLayoutPanel1->Controls->Add(this->stockSnack, 7, 7);
			this->tableLayoutPanel1->Controls->Add(this->stockSandwich, 7, 6);
			this->tableLayoutPanel1->Controls->Add(this->stockSoda, 7, 5);
			this->tableLayoutPanel1->Controls->Add(this->stockLPG, 7, 4);
			this->tableLayoutPanel1->Controls->Add(this->stockDiesel, 7, 3);
			this->tableLayoutPanel1->Controls->Add(this->stockPetrol, 7, 2);
			this->tableLayoutPanel1->Controls->Add(this->label9, 7, 1);
			this->tableLayoutPanel1->Controls->Add(this->label8, 5, 5);
			this->tableLayoutPanel1->Controls->Add(this->label7, 5, 4);
			this->tableLayoutPanel1->Controls->Add(this->label6, 5, 3);
			this->tableLayoutPanel1->Controls->Add(this->label5, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->label4, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->label2, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label1, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->textFuelAmt, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->comboFuelType, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->button1, 4, 8);
			this->tableLayoutPanel1->Controls->Add(this->sodaAmt, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->sandwichAmt, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->snackAmt, 4, 5);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 10;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(810, 507);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// totalPrice
			// 
			this->totalPrice->Dock = System::Windows::Forms::DockStyle::Fill;
			this->totalPrice->Location = System::Drawing::Point(307, 298);
			this->totalPrice->Name = L"totalPrice";
			this->totalPrice->Size = System::Drawing::Size(121, 29);
			this->totalPrice->TabIndex = 31;
			this->totalPrice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Location = System::Drawing::Point(226, 298);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 29);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Total Price";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label15->Location = System::Drawing::Point(706, 298);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(85, 29);
			this->label15->TabIndex = 28;
			this->label15->Text = L"Snack";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label14->Location = System::Drawing::Point(706, 278);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(85, 20);
			this->label14->TabIndex = 27;
			this->label14->Text = L"Sandwich";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label13->Location = System::Drawing::Point(706, 251);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(85, 27);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Soda";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label12->Location = System::Drawing::Point(706, 224);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(85, 27);
			this->label12->TabIndex = 25;
			this->label12->Text = L"LPG";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label11->Location = System::Drawing::Point(706, 197);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(85, 27);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Diesel";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label10->Location = System::Drawing::Point(706, 177);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(85, 20);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Petrol";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// stockSnack
			// 
			this->stockSnack->Dock = System::Windows::Forms::DockStyle::Fill;
			this->stockSnack->Location = System::Drawing::Point(615, 298);
			this->stockSnack->Name = L"stockSnack";
			this->stockSnack->Size = System::Drawing::Size(85, 29);
			this->stockSnack->TabIndex = 22;
			this->stockSnack->Text = L"Snack";
			this->stockSnack->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// stockSandwich
			// 
			this->stockSandwich->Dock = System::Windows::Forms::DockStyle::Fill;
			this->stockSandwich->Location = System::Drawing::Point(615, 278);
			this->stockSandwich->Name = L"stockSandwich";
			this->stockSandwich->Size = System::Drawing::Size(85, 20);
			this->stockSandwich->TabIndex = 21;
			this->stockSandwich->Text = L"Sandwich";
			this->stockSandwich->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// stockSoda
			// 
			this->stockSoda->Dock = System::Windows::Forms::DockStyle::Fill;
			this->stockSoda->Location = System::Drawing::Point(615, 251);
			this->stockSoda->Name = L"stockSoda";
			this->stockSoda->Size = System::Drawing::Size(85, 27);
			this->stockSoda->TabIndex = 20;
			this->stockSoda->Text = L"Soda";
			this->stockSoda->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// stockLPG
			// 
			this->stockLPG->Dock = System::Windows::Forms::DockStyle::Fill;
			this->stockLPG->Location = System::Drawing::Point(615, 224);
			this->stockLPG->Name = L"stockLPG";
			this->stockLPG->Size = System::Drawing::Size(85, 27);
			this->stockLPG->TabIndex = 19;
			this->stockLPG->Text = L"LPG";
			this->stockLPG->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// stockDiesel
			// 
			this->stockDiesel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->stockDiesel->Location = System::Drawing::Point(615, 197);
			this->stockDiesel->Name = L"stockDiesel";
			this->stockDiesel->Size = System::Drawing::Size(85, 27);
			this->stockDiesel->TabIndex = 18;
			this->stockDiesel->Text = L"Diesel";
			this->stockDiesel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// stockPetrol
			// 
			this->stockPetrol->Dock = System::Windows::Forms::DockStyle::Fill;
			this->stockPetrol->Location = System::Drawing::Point(615, 177);
			this->stockPetrol->Name = L"stockPetrol";
			this->stockPetrol->Size = System::Drawing::Size(85, 20);
			this->stockPetrol->TabIndex = 17;
			this->stockPetrol->Text = L"Petrol";
			this->stockPetrol->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->Location = System::Drawing::Point(615, 150);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(85, 27);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Stock Info (Price/Amt)";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label8->Location = System::Drawing::Point(434, 251);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 27);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Snack";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Location = System::Drawing::Point(434, 224);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 27);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Sandwich";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label6->Location = System::Drawing::Point(434, 197);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 27);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Soda";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Location = System::Drawing::Point(307, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 27);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Other Sales";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Location = System::Drawing::Point(18, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 27);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Fuel Type";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Location = System::Drawing::Point(18, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Fuel Amount (L)";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(99, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Fuel Sales";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textFuelAmt
			// 
			this->textFuelAmt->Location = System::Drawing::Point(99, 200);
			this->textFuelAmt->Name = L"textFuelAmt";
			this->textFuelAmt->Size = System::Drawing::Size(121, 20);
			this->textFuelAmt->TabIndex = 2;
			// 
			// comboFuelType
			// 
			this->comboFuelType->FormattingEnabled = true;
			this->comboFuelType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Petrol", L"Diesel", L"LPG" });
			this->comboFuelType->Location = System::Drawing::Point(99, 227);
			this->comboFuelType->Name = L"comboFuelType";
			this->comboFuelType->Size = System::Drawing::Size(121, 21);
			this->comboFuelType->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Location = System::Drawing::Point(307, 330);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Sell";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// sodaAmt
			// 
			this->sodaAmt->Location = System::Drawing::Point(307, 200);
			this->sodaAmt->Name = L"sodaAmt";
			this->sodaAmt->Size = System::Drawing::Size(120, 20);
			this->sodaAmt->TabIndex = 32;
			// 
			// sandwichAmt
			// 
			this->sandwichAmt->Location = System::Drawing::Point(307, 227);
			this->sandwichAmt->Name = L"sandwichAmt";
			this->sandwichAmt->Size = System::Drawing::Size(120, 20);
			this->sandwichAmt->TabIndex = 33;
			// 
			// snackAmt
			// 
			this->snackAmt->Location = System::Drawing::Point(307, 254);
			this->snackAmt->Name = L"snackAmt";
			this->snackAmt->Size = System::Drawing::Size(120, 20);
			this->snackAmt->TabIndex = 34;
			// 
			// tick
			// 
			this->tick->Enabled = true;
			this->tick->Interval = 10;
			this->tick->Tick += gcnew System::EventHandler(this, &MyForm::tick_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(810, 507);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Shop App";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sodaAmt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sandwichAmt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->snackAmt))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tick_Tick(System::Object^  sender, System::EventArgs^  e) {
		updateStockInfo(stockPetrol, stockDiesel, stockLPG, stockSoda, stockSandwich, stockSnack);
		checkPrice(textFuelAmt, sodaAmt, sandwichAmt, snackAmt, comboFuelType, totalPrice);
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	sale(textFuelAmt, sodaAmt, sandwichAmt, snackAmt, comboFuelType);
}
};
}
