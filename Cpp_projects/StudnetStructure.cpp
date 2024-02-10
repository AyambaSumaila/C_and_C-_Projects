#include<iostream>
using namespace std;




int main()
{



	int* arr;
	int* marks;
	int sum = 0;
	int size;
	cout << "Enter the size :";
	cin >> size;

	cout << "Enter " << size << " numbers";
	arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		
		sum += sum + arr[i];

	}


	cout << "The sum of " << size << "Numbers is:" << sum;

	delete[]arr;
}