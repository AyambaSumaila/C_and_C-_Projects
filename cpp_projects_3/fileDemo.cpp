#include <iostream>
#include <fstream>
using namespace std;
int main()
{

ofstream myFile;
myFile.open("sumaila.txt");
myFile<<"I love tuna and tuna loves me\n";
myFile.close();

}
