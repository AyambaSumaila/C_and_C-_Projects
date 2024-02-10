#include<iostream>
#include<math.h>
using namespace std;
int main()

{
   
    cout<<"Enter how manys you want in array:\n";
     int numbers;
     cin>>numbers;

    int* array=new int[numbers];
    for(int i=0; i<numbers; i++)
    {
        cout<<"\nEnter array["<<i+1<<"] element: ";
        cin>>array[i];


    }

    int k;
    cout<<"Enter the element you want to search\n";
    cin>>k;
    for(int i=0; i<numbers; i++)
    {
        if(array[i] == k)
        {
            cout<<"Element found at "<<"index "<<i<<endl;
            exit(0);

        }
    }

    delete array;
    cout<<"Element does not exit in array\n";
}