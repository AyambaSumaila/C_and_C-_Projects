#include<iostream>
using namespace std;
//search a key to be deleted
int findElement(int arr[], int n, int key);

//Function to deleteElement
int deleteElement(int arr[], int n, int key)
{
    //Find pos of element to be deleted

    int pos=findElement(arr, n, key);

    if(pos==-1)
    {
        cout<<"Element not found";
    }
    //Delete the element

    int i;

    for(int i=pos, i<n - 1; i++)
    {
        arr[i]=arr[i + 1];

    }
    return n-1;
}

int findElement(int arr[], int n, int key)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i]==key)
            return key;
    }

    return -1;
}

int main()
{
    int i;
    int arr[]={32, 9, 28, 10};

    int n=sizeof(arr)/sizeof(arr[0]);
    int key=30;

    cout<<"Array before deletion\n";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    //Function called after deletion

    n=deleteElement(arr, n, key);

    cout<<"\n\nArray after deletion\n";
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

    return 0;
    



}
