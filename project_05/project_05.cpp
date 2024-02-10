// project_05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
#include<fstream>
#define CRT_SECURE_NO_WARNINGS
using namespace std;

class Payroll
{
private:
	double payRate;//holds an employee hourly pay rate
	double hoursWorked;

public:
	Payroll();
	Payroll(double payR, double hoursW);
	void setPayRate(double payR);
	void setHoursWorked(double hoursW);
	double getPayRate();
	double getHoursWorked();
	double getGrossPay();


};

int main()
{
	const int numberOfEmployees = 7;
	int hours[numberOfEmployees];
	int count;
	ifstream datafile;

	datafile.open("payroll.text");
	if (!datafile)
	{
		cout << "\t\tError opening data file \n";

	else {

		for (count = 0; count < numberOfEmployees; count++)
		{
			double hours;
			double payRate;
			double grossPay;
			datafile >> hours;
			datafile >> payRate;
			if (hours <= 40)
			{
				grossPay = hours * payRate;
			}
		}
	}


	}

}



