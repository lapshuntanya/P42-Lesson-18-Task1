#pragma once
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

struct Computer
{
	char name[100] = "undefined";	//•	Назва
	float frequency = 0;			//•	Частота
	int RAM = 0;					//•	Обсяг оперативної пам'яті
	bool DVD_ROM = false;			//•	Наявність DVD ROM
	float price = 0;				//•	Вартість

	void showInfo() {
		cout << setw(15) << "Name: " << name << endl;
		cout << setw(15) << "Frequency: " << frequency << "GHz" << endl;
		cout << setw(15) << "RAM: " << RAM << "Gb" << endl;
		cout << setw(15) << "DVD ROM: " << boolalpha << DVD_ROM << endl;
		cout << setw(15) << "Price: " << price << "UAH" << endl;
		cout << "--------------------------------------------------\n";
	}
};