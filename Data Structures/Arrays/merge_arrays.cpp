#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter the size of the first array: ";
    cin>>n1;
    int a[n1];
    cout<<"Enter the elements of the first array:\n";
    for(int i=0;i<n1;i++) cin>>a[i];
    cout<<"Enter the size of the second array: ";
    cin>>n2;
    int b[n2];
    cout<<"Enter the elements of the second array:\n";
    for(int i=0;i<n2;i++) cin>>b[i];
    cout<<"Merged array:\n";
    for(int i=0;i<n1;i++) cout<<a[i]<<" ";
    for(int i=0;i<n2;i++) cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}
