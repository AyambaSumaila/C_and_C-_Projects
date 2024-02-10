#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x=10;
    int &refx=x;
    refx++;
    cout<<"X is now "<<x<<endl;
    cout<<"refx is now "<<refx<<endl;

    int y=11;
    const int &refx_2=y;
    refx_2++;
    cout<<"X is now "<<x<<endl;
    cout<<"refx is now "<<refx_2<<endl;

    
    

}
