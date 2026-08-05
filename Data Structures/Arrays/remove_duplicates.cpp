#include <iostream>
using namespace std;

int main(){
int n; cout<<"Enter the number of elements in the sorted array: "; cin>>n;
int arr[n];
cout<<"Enter the sorted array elements:\n";
for(int i=0;i<n;i++) cin>>arr[i];
int idx=0;
for(int i=1;i<n;i++) if(arr[i]!=arr[idx]) arr[++idx]=arr[i];
cout<<"Array after removing duplicates:\n";
for(int i=0;i<=idx;i++) cout<<arr[i]<<" ";
cout<<"\nTotal unique elements: "<<idx+1<<endl;
}
