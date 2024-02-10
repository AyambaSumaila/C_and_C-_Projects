#include<iostream>
using namespace std;

//Nearly Sort
void insertionSort(int array[], int N, int K)
{
    int i, flag, j;

    // start from index 1
    for (i = 1; i < N; i++) {
        // store current element in flag
        flag = array[i];
        j = i - 1;

        // Move the flag element until
        // its previous element is greater
        // or index is 0
        while (j >= 0 && array[j] > flag) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        // assign the flag value
        // to correct index
        array[j + 1] = flag;
    }
}

// Function to print the array
void printArray(int array[], int length)
{
    for (int i = 0; i < length; i++)
        cout << array[i] << " ";
    cout << endl;
}

// Main function

//Insertion Sort Algorithm
void insertionSort(int myArray[], int);

//Selection Sort

void selSort(int[], int);
int main()
{
    

    

    int option;
    cout<<"\t\t\tPlease Select You Choice:\n";
    cout<<"\t\t\t1. Nearly Sort Algorithm\n";
    cout<<"\t\t\t2. Insertion Sort Algorithm\n";
    cout<<"\t\t\t3. Selection Sort Algorithm\n";

    cin>>option;
    switch(option)
    {
        case 1:
        int array[100], N, K;
    
    cout << "Enter Number of elements: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Enter element " << i + 1 << ":";
        cin >> array[i];
    }
    
    cout << "Enter the value of K: ";
    cin >> K;
        insertionSort(array, N, K);
        cout << "Sorted Array" << endl;
        printArray(array, N);

        break;



        case 2://Insertion Sort Algorithm
        cout << "\t\t\tPlease Enter the Size of Array\n";

		int size, myArr[50];
		cin >> size;
		cout << "\t\t\tPlease Enter " << size << " Array elements\n";

		for (int i = 0; i < size; i++)
		{
			cin >> myArr[i];
		}
        break;
        case 3:
        //Selection Sort Algorithm
        int num, arr[50], i;
		cout << "\t\t\tEnter the Size of Array: ";
		cin >> num;
		cout << "\t\t\tEnter " << num << " Array Elements: ";
		for (i = 0; i < num; i++)
			cin >> arr[i];
		selSort(arr, num);
		cout << "\n\t\t\tThe Sorted Array is:\n";
		for (i = 0; i < size; i++)
			cout << arr[i] << " ";
		cout << endl;

        break;

        case 4:
        break;


    }

    

    return 0;
}

//Insertion sort Algorithm

void insertionSort(int myArray[], int size)
{
	int i, num, j;
	for (i = 1; i <size; i++)
	{
		num = myArray[i];
		j = i - 1;
		while ((num < myArray[j]) && (j >= 0))
		{
			myArray[j + 1] = myArray[j];
			j--;
		}
		myArray[j + 1] = num;
	}
}

//Selection Sort Algorithm

void selSort(int arr[], int size)
{
	int i, j, temp,  index;
	for (i = 0; i < (size - 1); i++)
	{
		int check = 0;
		int low = arr[i];
		for (j = (i + 1); j < size; j++)
		{
			if (low > arr[j])
			{
				low = arr[j];
				check++;
				index = j;
			}
		}
		if (check != 0)
		{
			temp = arr[i];
			arr[i] = low;
			arr[index] = temp;
		}
	}
}