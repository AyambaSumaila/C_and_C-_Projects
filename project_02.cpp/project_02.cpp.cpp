// project_02.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include<iostream>
#include<iomanip>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;


/*
	Program: Corporate Sales (Ch11_7.cpp)
	Written by: Robby Sanchez
	This program displays a table showing the division sales for each quarter and the total corporate sales for the year.
	December 23, 2023
*/


//SaleDivision class 
class DivisionSales{
private:
	static int yearSales;
	int quantitySales[4];

public:
	void addSales(int, int, int, int);
	int sales(int);
	int getValue()
	{
		return yearSales;
	}


};

//Function that takes an integer argument within the range of 0 to 3

void DivisionSales::addSales(int sale, int sale2, int sale3, int sale4)
{
	//Arrays of range of 0 to 3
	quantitySales[0] = sale;
	quantitySales[1] = sale2;
	quantitySales[2] = sale3;
	quantitySales[3] = sale4;
	yearSales = sale + sale2 + sale3 + sale4;
}

//Display a table showing the division sales for each quarter
int DivisionSales::sales(int number)
{
	int value = quantitySales[number];
	return value;

}

int DivisionSales::yearSales;

int main()
{
	const int divisions = 6;
	DivisionSales divisionSales[divisions];

	int quarter, division;
	for (int division = 0; division < 6; division++)
	{
		int quarter, quarter2, quarter3, quarter4;
		cout << "\t\t\t=====================================================" << endl;
		cout << "\t\t\t========C++ PROGRAM THAT COMPUTES         ===========" << endl;
		cout << "\t\t\t========QUARTERLY SALES OF EACH DIVISIONS ===========" << endl;
		cout << "\t\t\t=====================================================" << endl;

		cout << "\t\t\tEnter the sales for each division " << (division + 1) << "\n";
		cout << "Enter quarter 1 sales: ";
		cin >> quarter;

		cout << "\t\t\tEnter quarter 2 sales:";
		cin >> quarter2;
		cout << "\t\t\tEnter quarter 3 sales: ";
		cin >> quarter3;
		cout << "\t\t\tEnter quarter 4 sales:";
		cin >> quarter4;

		divisionSales[division].addSales(quarter, quarter2, quarter3, quarter4);

	}

	//Formatting table
	cout << "\t\t\t=============================================" << endl;
	cout << "\t\t\tDivision Sales for each quarter " << endl;
	cout << "\t\t\t=============================================" << endl;
	cout << "\t\t" << "Quantity 1" << "\t" << "Quantity 2" << "\t" << "Quantity 3" << "\t" << "Quantity 4" << endl;

	//Table showing the division sales for each quarter
	for (division = 0; division < 6; division++)
	{
		cout << "Division " << (division + 1) << ":";
		for (quarter = 0; quarter < 4; quarter++)
		{
			cout << "\t\t$"<<divisionSales[division].sales(quarter);

		}
		cout << "\n";

	}
	//Display total
	cout << "\t\t\t =============================================" << endl;
	cout << "\nTotal corporate sales for the year:";
	cout << "\$" << divisionSales[0].getValue() << endl;


	system("pause > 0");
}