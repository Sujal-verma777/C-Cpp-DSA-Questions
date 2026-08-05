#include <iostream>
using namespace std;

int main()
{
    int n,arr[100];

    cout<<"Enter number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++) cin>>arr[i];

    int maximum=arr[0];

    for(int i=1;i<n;i++)
        if(arr[i]>maximum)
            maximum=arr[i];

    cout<<"Largest element = "<<maximum;
    return 0;
}
