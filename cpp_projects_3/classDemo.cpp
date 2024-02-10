#include<iostream>
using namespace std;
class Demo{
    private:
    int m, n;

    public:
    void my_data(int,int);
    void show_data();

};

void Demo::my_data(int x, int y)
{
    m=x;
    n=y;
}
void Demo::show_data()
{
    cout<<" m = "<<m<<"\t"<<"n = "<<n<<endl;
}

int main()
{
    Demo d;
    d.my_data(12, 3);
    d.show_data();
}