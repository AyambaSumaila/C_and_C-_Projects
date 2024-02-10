#include <iostream>
using namespace std;

//Program to insert an element at a specific position

void insertElement(int arr[], int n, int x, int pos)
{
    //Shift elements to the right
    //which are on the side of position

    for(int i =n -1; i >=pos; i--)
        arr[i + 1]=arr[i];

        arr[pos]=x;

}
int main()
{
    int arr[5]={73, 89, 3, 21, 30};
    int n=4;

    cout<<"Before insertion : ";

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int x=11;
    int pos=3;

    //function called from

    insertElement(arr, n, x, pos);
    n++;

    cout<<"After insertion: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}