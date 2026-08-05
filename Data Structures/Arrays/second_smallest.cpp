#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n,arr[100];
    cout<<"Enter number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++) cin>>arr[i];

    int smallest=INT_MAX,secondSmallest=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            secondSmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<secondSmallest && arr[i]!=smallest)
        {
            secondSmallest=arr[i];
        }
    }

    cout<<"Second smallest = "<<secondSmallest;
    return 0;
}
