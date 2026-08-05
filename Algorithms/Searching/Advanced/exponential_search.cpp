#include <iostream>
using namespace std;
int bs(int a[],int l,int r,int x){while(l<=r){int m=(l+r)/2; if(a[m]==x)return m; if(a[m]<x)l=m+1; else r=m-1;} return -1;}
int main(){int n,x; cout<<"Enter number of sorted elements: ";cin>>n; int a[n]; cout<<"Enter sorted array:\n"; for(int i=0;i<n;i++)cin>>a[i]; cout<<"Enter element to search: ";cin>>x; if(a[0]==x){cout<<"Element found at index 0"; return 0;} int i=1; while(i<n&&a[i]<=x)i*=2; int ans=bs(a,i/2,min(i,n-1),x); if(ans!=-1) cout<<"Element found at index "<<ans; else cout<<"Element not found."; }