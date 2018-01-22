#include "MyForm.h"
#include <iostream>
#include <ctype.h>
#include <fstream>
#include <string>
#include <chrono>
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

struct Stock {
	double amount, price;
} petrol, diesel, lpg, sodas, sandwiches, snacks;

[STAThread]
void Main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);
}

const int LIMIT = 6;

void createDatabase(Stock database[LIMIT]) {
	ifstream stock;
	double amt, prc;
	int i = 0;

	database[LIMIT];

	stock.open("stock.txt");

	if (stock.is_open()) {
		while (stock >> amt >> prc) {
			database[i].amount = amt;
			database[i].price = prc;
			i++;
		}
	}
	stock.close();
}

void Project1::MyForm::updateStockInfo(System::Windows::Forms::Label^ labPetrol, System::Windows::Forms::Label^ labDiesel, System::Windows::Forms::Label^ labLPG, System::Windows::Forms::Label^ labSoda, System::Windows::Forms::Label^ labSandwich, System::Windows::Forms::Label^ labSnack) {
	Stock database[6];
	createDatabase(database);
	labPetrol->Text = database[0].price + "$/L" + " / " + database[0].amount + " L";
	labDiesel->Text = database[1].price + "$/L" + " / " + database[1].amount + " L";
	labLPG->Text = database[2].price + "$/L" + " / " + database[2].amount + " L";
	labSoda->Text = database[3].price + "$/pc" + " / " + database[3].amount + " pcs";
	labSandwich->Text = database[4].price + "$/pc" + " / " + database[4].amount + " pcs";
	labSnack->Text = database[5].price + "$/pc" + " / " + database[5].amount + " pcs";
}

void Project1::MyForm::checkPrice(System::Windows::Forms::TextBox^ fuelBox, System::Windows::Forms::NumericUpDown^ sodaAmt, System::Windows::Forms::NumericUpDown^ sandwichAmt, System::Windows::Forms::NumericUpDown^ snackAmt, System::Windows::Forms::ComboBox^ combo, System::Windows::Forms::Label^ priceLabel) {
	int  fuelType = 0;
	Stock database[6];
	createDatabase(database);
	double petrolPrice = database[0].price;
	double dieselPrice = database[1].price;
	double lpgPrice = database[2].price;
	double sodaDBPrice = database[3].price;
	double sandwichDBPrice = database[4].price;
	double snackDBPrice = database[5].price;
	double fuelPrice, totalPrice, sodaPrice, sandwichPrice, snackPrice = 0;

	if (combo->Text == "Petrol") {
		fuelType = 1;
	}
	else if (combo->Text == "Diesel") {
		fuelType = 2;
	}
	else if (combo->Text == "LPG") {
		fuelType = 3;
	}
	else if (combo->Text == "") {
		fuelType = 4;
	}
	
	if (fuelType == 1) {
		if (fuelBox->Text == "") {
			fuelPrice = 0;
		}
		else {
			fuelPrice = System::Convert::ToDouble(fuelBox->Text) * petrolPrice;
		}
	}
	else if (fuelType == 2) {
		if (fuelBox->Text == "") {
			fuelPrice = 0;
		}
		else {
			fuelPrice = System::Convert::ToDouble(fuelBox->Text) * dieselPrice;
		}
	}
	else if (fuelType == 3) {
		if (fuelBox->Text == "") {
			fuelPrice = 0;
		}
		else {
			fuelPrice = System::Convert::ToDouble(fuelBox->Text) * lpgPrice;
		}
	}
	else {
		fuelPrice = 0;
	}

	sodaPrice = Convert::ToDouble(sodaAmt->Value) * sodaDBPrice;
	sandwichPrice = Convert::ToDouble(sandwichAmt->Value) * sandwichDBPrice;
	snackPrice = Convert::ToDouble(snackAmt->Value) * snackDBPrice;

	totalPrice = sodaPrice + sandwichPrice + snackPrice + fuelPrice;

	priceLabel->Text = System::Convert::ToString(totalPrice) + "$";
}

void Project1::MyForm::sale(System::Windows::Forms::TextBox^ fuelBox, System::Windows::Forms::NumericUpDown^ sodaAmt, System::Windows::Forms::NumericUpDown^ sandwichAmt, System::Windows::Forms::NumericUpDown^ snackAmt, System::Windows::Forms::ComboBox^ combo) {
	int  fuelType = 0;
	int *pfuelType = &fuelType;
	Stock database[6];
	createDatabase(database);
	double petrolPrice = database[0].price;
	double dieselPrice = database[1].price;
	double lpgPrice = database[2].price;
	double sodaDBPrice = database[3].price;
	double sandwichDBPrice = database[4].price;
	double snackDBPrice = database[5].price;
	double fuelPrice, sodaPrice, sandwichPrice, snackPrice = 0;
	double petrolAmount = database[0].amount;
	double dieselAmount = database[1].amount;
	double lpgAmount = database[2].amount;
	string fuelString;

	fstream stock, log;

	if (combo->Text == "Petrol") {
		*pfuelType = 1;
	}
	else if (combo->Text == "Diesel") {
		*pfuelType = 2;
	}
	else if (combo->Text == "LPG") {
		*pfuelType = 3;
	}
	else if (combo->Text == "") {
		*pfuelType = 4;
	}

	if (fuelType == 1) {
		if (fuelBox->Text == "") {
			fuelPrice = 0;
		}
		else {
			fuelPrice = System::Convert::ToDouble(fuelBox->Text) * petrolPrice;
			petrolAmount = petrolAmount - System::Convert::ToDouble(fuelBox->Text);
			fuelString = "Petrol";
		}
	}
	else if (fuelType == 2) {
		if (fuelBox->Text == "") {
			fuelPrice = 0;
		}
		else {
			fuelPrice = System::Convert::ToDouble(fuelBox->Text) * dieselPrice;
			dieselAmount = dieselAmount - System::Convert::ToDouble(fuelBox->Text);
			fuelString = "Diesel";
		}
	}
	else if (fuelType == 3) {
		if (fuelBox->Text == "") {
			fuelPrice = 0;
		}
		else {
			fuelPrice = System::Convert::ToDouble(fuelBox->Text) * lpgPrice;
			lpgAmount = lpgAmount - System::Convert::ToDouble(fuelBox->Text);
			fuelString = "LPG";
		}
	}
	else {
		fuelPrice = 0;
	}

	sodaPrice = Convert::ToDouble(sodaAmt->Value) * sodaDBPrice;
	sandwichPrice = Convert::ToDouble(sandwichAmt->Value) * sandwichDBPrice;
	snackPrice = Convert::ToDouble(snackAmt->Value) * snackDBPrice;

	double totalPrice = sodaPrice + sandwichPrice + snackPrice + fuelPrice;
	double fuelSold = System::Convert::ToDouble(fuelBox->Text);

	double sodaAmount = database[3].amount - Convert::ToDouble(sodaAmt->Value);
	double sandwichAmount = database[4].amount - Convert::ToDouble(sandwichAmt->Value);
	double snackAmount = database[5].amount - Convert::ToDouble(snackAmt->Value);

	double sodaSold = Convert::ToDouble(sodaAmt->Value);
	double sandwichSold = Convert::ToDouble(sandwichAmt->Value);
	double snackSold = Convert::ToDouble(snackAmt->Value);

	stock.open("stock.txt");
	if (stock.is_open()) {
		stock << petrolAmount << " " << database[0].price << endl;
		stock << dieselAmount << " " << database[1].price << endl;
		stock << lpgAmount << " " << database[2].price << endl;
		stock << sodaAmount << " " << database[3].price << endl;
		stock << sandwichAmount<< " " << database[4].price << endl;
		stock << snackAmount << " " << database[5].price << endl;
	}
	stock.close();

	auto time_x = chrono::system_clock::now();
	time_t time_now = chrono::system_clock::to_time_t(time_x);

	log.open("transaction_log.txt", ios::app);
	if (log.is_open()) {
		log << ctime(&time_now);
		log << "Sold: " << endl;
		log << fuelSold << "L of " << fuelString << " for $" << fuelPrice << endl;
		log << sodaSold << " soda(s) for $" << sodaPrice << endl;
		log << sandwichSold << " sandwich(es) for $" << sandwichPrice << endl;
		log << snackSold << " snack(s) for $" << snackPrice << endl;
		log << "Total amount was " << "$" << totalPrice << endl << endl << endl;
	}
	log.close();
}