#include<iostream>
using namespace std;
int main()
{
    int sales[4]={33, 66, 2, 89};
    int sum=0;

    for(int i=0; i<4; i++)
    {
        sum +=sales[i];
        cout<<sum<<endl;
    }
}