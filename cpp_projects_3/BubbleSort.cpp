#include<iostream>
using namespace std;

void bubbleSort(int arr[], int num)
{
    for(int i=0; i<num -1; i++)
    {
        for(int j=0; j<num - i - 1; j++)
        {
            if(arr[j] >arr[j+1])
            swap(arr[j], arr[j+1]);

        }
    }
}

void printArray(int arr[], int size)
{
    
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}

int  main() 
{
    int arr[]={3, 2, 44, 1, 4};
    int Num=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, Num);
    cout<<"Sorted Array: \n";

    printArray(arr, Num);

    return 0;
}