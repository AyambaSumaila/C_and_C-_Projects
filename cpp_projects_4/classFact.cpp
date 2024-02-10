#include<iostream>
using namespace std;
class fact{
    int num;
    public:
    void input(int x)
    {
        num=x;
    }
void getfact();

};

void fact::getfact()
{
    long int y=1;

    short i;
    for(i=0; i<=num; i++)
    {
        y=y*i;
    }
    cout<<"Factorial of "<<num<<" is "<<y<<endl;

}

int main()
{
    int n;

    fact obj;
    cout<<"Enter a number: ";
    cin>>n;
    obj.input(n);
    obj.getfact(n);
}