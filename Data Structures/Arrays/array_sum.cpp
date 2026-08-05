#include <iostream>
using namespace std;

int main()
{
    int n,sum=0,arr[100];

    cout<<"Enter number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
        sum+=arr[i];

    cout<<"Sum = "<<sum;
    return 0;
}
