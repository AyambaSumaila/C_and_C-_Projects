#include<iostream>
using namespace std;
class ReveNum
{
    int num;
    public:
    void input(int x)
    {
        num=x;
    }

    int getNum()
    {
        return num;
    }

    long int getrev();
};

long int ReveNum::getrev()
{
    int save=num, r, rev=0;

    while(save !=0)
    {
        r=save % 10;
        rev=rev *10 + r;
        save=save/10;
    }
    return rev;
}

int main()
{
    ReveNum obj;
    int x;

    cout<<"Enter the number: "<<endl;

    cin>>x;
    obj.input(x);
    cout<<"Reverse of "<<obj.getNum()
    <<" is "<<obj.getrev()<<endl;

}