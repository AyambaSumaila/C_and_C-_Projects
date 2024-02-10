#include<iostream>
using namespace std;

int BinarySearch(int arr[], int low, int high, int target)
{
    if(high >=low)
    {
        int mid=(low + high)/2;

        if(arr[mid]==target)
        {
            return mid;
        }

        if(arr[mid] > target)
        {
            return BinarySearch(arr, low, mid - 1, target);
        }

    return BinarySearch(arr, mid + 1, high, target);
    }

    return -1;

}


int main()
{
    int arr[5]={32, 4, 11, 3, 99};
    int target=3;

    int number=sizeof(arr)/sizeof(arr[0]);

    int result=BinarySearch(arr, 0, number - 1, target);

    (result==-1)
    ? cout<<"Element is not present in array "
    :cout<<"Element is present at index "<<result;
     
     return 0;
}