#include <iostream>
using namespace std;
int main(){
    int n,target;
    cout<<"Enter number of sorted elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter sorted array:\n";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter element to search: ";
    cin>>target;
    int l=0,r=n-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(arr[m]==target){ cout<<"Element found at index "<<m<<endl; return 0; }
        if(arr[m]<target) l=m+1; else r=m-1;
    }
    cout<<"Element not found."<<endl;
}