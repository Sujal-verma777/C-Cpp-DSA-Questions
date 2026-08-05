#include <iostream>
using namespace std;

int main()
{
    int n,arr[100];

    cout<<"Enter number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++) cin>>arr[i];

    int minimum=arr[0];

    for(int i=1;i<n;i++)
        if(arr[i]<minimum)
            minimum=arr[i];

    cout<<"Smallest element = "<<minimum;
    return 0;
}
