#include <iostream>
#include <fstream>
using namespace std;
int main()
{

ifstream myFile2("bucky.txt");

string name;
while(myFile2>>name)
{
cout<<" "<<name;
}

}