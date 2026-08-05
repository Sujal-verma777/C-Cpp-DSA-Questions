#include <iostream>
#include <cmath>
using namespace std;
int main(){
 int n,x; cout<<"Enter number of sorted elements: ";cin>>n;
 int a[n]; cout<<"Enter sorted array:\n"; for(int i=0;i<n;i++)cin>>a[i];
 cout<<"Enter element to search: ";cin>>x;
 int step=sqrt(n),prev=0;
 while(prev<n && a[min(step,n)-1]<x){ prev=step; step+=sqrt(n); if(prev>=n){cout<<"Element not found.\n"; return 0;}}
 while(prev<min(step,n)&&a[prev]<x) prev++;
 if(prev<n&&a[prev]==x) cout<<"Element found at index "<<prev<<endl;
 else cout<<"Element not found."<<endl;
}