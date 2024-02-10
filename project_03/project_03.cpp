// project_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<iostream>
#include<cctype>
#include<string>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
/*
	Program: Password Verifier 
	Written by:Sumaila Ayamba
	This program asks user for a password and then verifies that it meets the stated criteria
	December 23, 2023
*/

int main()
{
	string aPassword;
	bool goodPassword = false;
	while (goodPassword == false)
	{
		//Allow user to enter preference of a password 
		cout << "\t\t\tEnter a password : ";
		
		cin >> aPassword;
		goodPassword = true;

		//Check if password length is least 6 characters
		if (aPassword.length() < 6)
		{
			goodPassword = false;
			cout << "\t\t\t\nYour password is too short; must be 6 characters";
			cout << endl;
			continue;

		}
		goodPassword = false;
		for (int i = 0; i < aPassword.length(); ++i)
		{
			switch (aPassword[i])
			{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				goodPassword = true;
				break;

			}
		}

		//Error message displays if no number is entered by user

		if (goodPassword == false)
		{
			cout << "\n\t\t\tYour password must contain at least 1 digit";
			cout << endl;
			continue;
		}
	}


	//Check if password meets all requirements
	cout << "\t\t\tYour password is : " << aPassword << "\n\n";



		char c;

		cout << "Enter a character: ";
		cin >> c;

		int asciiValue = (int)c;

		cout << "The ASCII value of character " << c << " is " << asciiValue << endl;

	



	}






