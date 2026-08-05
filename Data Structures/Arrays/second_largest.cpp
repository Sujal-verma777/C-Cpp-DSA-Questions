#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n,arr[100];
    cout<<"Enter number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++) cin>>arr[i];

    int largest=INT_MIN,secondLargest=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]!=largest)
        {
            secondLargest=arr[i];
        }
    }

    cout<<"Second largest = "<<secondLargest;
    return 0;
}
