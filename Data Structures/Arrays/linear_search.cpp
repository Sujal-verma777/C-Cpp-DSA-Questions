#include <iostream>
using namespace std;

int main()
{
    int n,arr[100],key;

    cout<<"Enter number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Enter element to search: ";
    cin>>key;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Element found at index "<<i;
            return 0;
        }
    }

    cout<<"Element not found.";
    return 0;
}
