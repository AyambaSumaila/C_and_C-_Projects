// project_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#define _CRT_SECURE_NO_WARNINGS
using namespace std; 
/*
	Program: String Selection Sort
	Written by: Sumaila Ayamba
	This program uses the selectionSort function to sort an array of strings
	December 24, 2023
*/


void selectionSort(string array[], const int size);
void showArray(string[], int);
int findSmallest(string[], int startIndex, int endIndex);
void swap(string& first, string& second);
void print(string array[], const int size);

int main()
{
	const int SIZE = 20;
	string name[SIZE]=
	{ "Collins, Bill",  "Smith, Bart",  "Michalski, Joe", "Griffin, Jim",
   "Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
   "Allison, Jeff",  "Moreno, Juan", "Wolfe, Bill",    "Whitman, Jean",
   "Moretti, Bella", "Wu, Hong",     "Patel, Renee",   "Harrison, Rose",
   "Smith, Cathy",   "Conroy, Pat",  "Kelly, Sean",    "Holland, Beth" };


	//Display the values

	cout << "\t\tThe UNsorted values are:\n";
	showArray(name, SIZE);
	selectionSort(name, SIZE);

	cout << "\t\tThe sorted values are\n";
	selectionSort(name, SIZE);
	print(name, SIZE);
	system("pause>0");


}

//This function performs an ascending-order selection sort on array
void selectionSort(string array[], const int size)
{
	int smallestIndex = 0;
	for (int i = 0; i < size; i++)
	{
		smallestIndex = findSmallest(array, i, size - 1);
		swab(array[i], array[smallestIndex]);

	}
}
