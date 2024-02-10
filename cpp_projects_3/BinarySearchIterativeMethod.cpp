#include<iostream>
using namespace std;

int BinarySearch(int arr[], int low, int high, int target)
{

    while(low <= high)
    {
        int mid=(low + high)/2;

        if(arr[mid]==target)
         return mid;
    }

    if(arr[mid] < target)
        low =mid + 1;

    else
    {
        high=mid - 1;
    }

    return -1;    
}


int main()
{
    cout<<"Enter the number of elements you want: \n";
    int number;
    cin>>number;

    int arr[40];
    cout<<"Enter "<<number<<" elements :\n";

    for(int i=0; i<number; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<number; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    i
    BinarySearch(arr, number, target);
}