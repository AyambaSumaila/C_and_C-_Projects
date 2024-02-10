#include<iostream>
using namespace std;
int main()
{
    void change(int &);
    int x=21;

    cout<<"Before calling change";
    cout<<"x= "<<x<<endl;
    change(x);
cout<<endl;
    cout<<"After calling change";
}

void change(int& y)
{
    y++;
}

