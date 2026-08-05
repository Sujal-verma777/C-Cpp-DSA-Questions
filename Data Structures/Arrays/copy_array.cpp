#include <iostream>
using namespace std;

int main()
{
    int n,source[100],destination[100];

    cout<<"Enter number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>source[i];

    for(int i=0;i<n;i++)
        destination[i]=source[i];

    cout<<"Copied array:"<<endl;

    for(int i=0;i<n;i++)
        cout<<destination[i]<<" ";

    return 0;
}
