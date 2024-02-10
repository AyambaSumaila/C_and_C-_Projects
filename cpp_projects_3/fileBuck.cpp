#include <iostream>
#include <fstream>
using namespace std;
int main()
{

ofstream myFile2("bucky.txt");
if(myFile2.is_open())
{
cout<<"Ok file is open";
myFile2<<"I love tuna and tuna loves me\n";
myFile2.close();

}
else
{
    cout<<"You mess up  ";
}




}