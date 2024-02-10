 #include<iostream>
 using namespace std;
#include<string.h>
 #include<conio.h>


class Student{
    char studName[5];
    int studAge;
    char studClass[5];
    public:
        void getData(char[], int, char[]);
        void showData();
       
};

void Student ::getData(char studN[5], int age, char studclass[5])
{
    strcpy(studName,studN);
    studAge=age;
    studName=studN;
    studClass=studclass


}


void Student :: showData()
{
    cout<<"Student Name is : "<<studName<<endl;
    cout<<"Student Age is : "<<studAge<<endl;
    cout<<"Student Class is : "<<studClass<<endl;



}


 int main()
 {

    Student stud, stud2;
    char student[5];
    int stuAge;
    char studclass[5];

    cout<<"Enter (name, age, class ) for student 1\n";

    cin>>student>>stuAge>>studclass;
    stud.getData(student, stuAge, studclass);

    cout<<"Enter (name, age, class ) for student 2\n";
    cin>>student>>stuAge>>studclass;
    stud2.getData(student, stuAge, studclass);

    cout<<"\t\t\tData for student 1 \n";
    stud.showData();

    cout<<"\t\t\tData for student 2 \n";
    stud2.showData();



 }
