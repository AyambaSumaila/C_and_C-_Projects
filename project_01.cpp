#include<iostream>
using namespace std; 
#define _CRT_SECURE_NO_WARNINGS

#include<iomanip>

/*
	Program: Movie Statistics Ch10_7.cpp)
	Written by: Sumaila Ayamba
	This program calculate the average, median, and mode of the values entered
	December 23, 2023
*/

//Functions prototypes

double mean(int *, int);
double median(int*, int);
int mode(int*, int);

int main()
{
	int* number;
	int numberOfStudents
		char repeat = ' ';

	do {
		//Prompt the user to enter in how many students were surveyed
		cout << "\t\t\tEnter the number of students that were surveyed: ";
		cin >> numberOfStudents;

		//Determine input validation
		while (numberOfStudents < 0)
		{
			cout << "\t\t\tInvalid number of students!\n";
			cout << "\t\t\tEnter in how many students were surved: ";
			cin >> numberOfStudents;

		}
		//Dynamically allocate an array large enough to hold a certain numbers of students
		number = new int[numberOfStudents];
		//Get the number of movies for each student

		for (int i = 0; i < numberOfStudents; i++)
		{
			cout << "\t\t\tNumber of movies say by Person #" << (i + 1) << ": ";
			cin >> number[i];

			//Determine input validation
			while (number[i] < 0)
			{
				cout << "\t\t\tPlease enter in a positive number: ";
				cout << "\t\t\t\nNumber of movies say by Person # " << (i + 1);
				cin >> number[i];

			}
		}

//Set numeric values
		cout << fixed << showpoint << setprecision(1);
		//Display the mean
		cout << "\t\t\t\nThe mean is: ";
		cout << mean(number, numberOfStudents) << endl;

//Display the mode 
		cout << "\t\t\t\nThe mode is: ";
		cout << mode(number, numberOfStudents) << endl;
		//Freeing the dynamically allocated memory

		delete[] number;
		number = 0;
//Ask the user to retry program or disregard
		cout << "\t\t\tPlease do you want to go again?\n";
		cin >> repeat;

	} while (repeat == 'Y' || repeat == 'y');
	cout << "\t\t\tProgram ending. Bye bye.\n";
	system("pause");

}

//Functions implementations for the return value of mean(average)

double mean(int* number, int numberOfStudents)
{
	double total = 0;
	double average;
	for (int i = 0; i < number; i++)
	{
		total += number[i];

	}
	average = total / numberOfStudents;
	return average;

}

//Function that returns value of the median
double median(int* number, int numberOfStudents)
{
	double median = 0.0;
	if (numberOfStudents % 2 == 0)
	{
		median = (number[numberOfStudents / 2] + number[(numberOfStudents / 2) + 1]) / 2;

	}
	else {
		median = number[numberOfStudents / 2];

	}
	return median;

}

//Function returns that returns the mode
int mode(int* number, int numberOfStudents)
{
	int mode = 0;
	int val = 0;
	int index;
	for (index = 0; index < numberOfStudents; index++)
	{
		if (*(number + index) == *(number + (index + 1)))
		{
			mode++;
			val = *(number + index);
		}
	}
	return val;

}