#include <iostream>
using namespace std;

int main(){
int n; cout<<"Enter the number of elements: "; cin>>n;
int arr[n];
cout<<"Enter the array elements:\n";
for(int i=0;i<n;i++) cin>>arr[i];
int k; cout<<"Enter the number of right rotations: "; cin>>k;
k%=n;
while(k--){
int last=arr[n-1];
for(int i=n-1;i>0;i--) arr[i]=arr[i-1];
arr[0]=last;
}
cout<<"Array after right rotation:\n";
for(int i=0;i<n;i++) cout<<arr[i]<<" ";
cout<<endl;
}
