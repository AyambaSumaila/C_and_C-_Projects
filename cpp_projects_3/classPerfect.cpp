#include<iostream>
using namespace std;
class Perfect
{
    int num;

    public:
    void input(int x)
    {
        num=x;
    }

    void check_per()
    {
        int sum=0, t;
        for(t=1; t<=num; t++)
        {
            if(num % 10==0)
            sum=sum + t;
        }
        if(sum==num)
        {
            cout<<"NUMBER :"<<num<<" IS PERFECT "<<endl;

        }
        else
        {
            cout<<"NUMBER: "<<num<<" IS NOT PERFECT "<<endl;

        }
        

};

    int main()
{
        Perfect obj;
        int x;
        cout<<"ENTER NUMBER TO BE CHECKED FOR PERFECTNESS: "<<endl;
        cin>>x;

        obj.input(x);
        obj.check_per();
    }

}
