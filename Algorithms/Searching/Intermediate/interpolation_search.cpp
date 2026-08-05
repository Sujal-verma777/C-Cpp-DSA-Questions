#include <iostream>
using namespace std;
int main(){
 int n,x; cout<<"Enter number of sorted elements: ";cin>>n;
 int a[n]; cout<<"Enter sorted array:\n"; for(int i=0;i<n;i++)cin>>a[i];
 cout<<"Enter element to search: ";cin>>x;
 int low=0,high=n-1;
 while(low<=high&&x>=a[low]&&x<=a[high]){
  if(low==high){ if(a[low]==x) cout<<"Element found at index "<<low; else cout<<"Element not found."; return 0;}
  int pos=low+((double)(high-low)/(a[high]-a[low]))*(x-a[low]);
  if(a[pos]==x){cout<<"Element found at index "<<pos;return 0;}
  if(a[pos]<x) low=pos+1; else high=pos-1;
 }
 cout<<"Element not found."<<endl;
}