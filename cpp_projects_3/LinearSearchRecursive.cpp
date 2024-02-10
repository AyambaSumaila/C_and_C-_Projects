#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)

{
    if(size==0)
    return -1;

    else if(arr[size -1]==target)
    {
        return size -1;
    }
    else {
        int ans=linearSearch(arr, size -1, target);

        return ans;
    }
    
}

int main()
{
    int arr[5]={32, 4, 1, 20, 3};

    int target=3;

    int ans=linearSearch(arr, 5, target);
    if(ans==-1)
    {
        cout<<"The element "<<target<<" is not found.\n";
    }

    else
    {
        cout<<"The "<<target<<" is found at index "<<ans<<endl;
    }

    return 0;
}