#include<iostream>
using namespace std;

int LinearSearch(int arr[], int number, int target)
{

for(int i=0; i<number; i++)
{
    if(arr[i]==target)
        return 1;
   
   return -1;
}


}

int main()
{
    int arr[]={23, 44, 1, 4, 1, 5};
    int target=1;
    int number=sizeof(arr)/sizeof(arr[0]);
    int result=LinearSearch(arr, number, target);

    (result==-1)?cout<<"Element is not present in array."
    :cout<<"Element is present at index "<<result;
    return 0;

}