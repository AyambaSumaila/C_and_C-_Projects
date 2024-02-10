#include<iostream>
using namespace std;

int main()
{
    int n, i;
    cout<<"How many elements you want in array:";
    cin>>n;

    int* arr=new int[n];
    int**ptr=new int*[n];

    for(int i=0; i<n; i++)
    {
        cout<<"\n Enter arr["<<i<<"]element: ";
        cin>>arr[i];
        ptr[i]=&arr[i];

    }

    cout<<"Element\t\tAddress\n";
    for(i=0; i<n; i++)
    {
        cout<<*ptr[i]<<"\t\t"<<ptr[i]<<endl;
    }

    delete arr;
    delete[] ptr;

}