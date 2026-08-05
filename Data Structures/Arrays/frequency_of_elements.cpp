#include <iostream>
using namespace std;

int main(){
int n; cout<<"Enter the number of elements: "; cin>>n;
int arr[n]; bool vis[n]={0};
cout<<"Enter the array elements:\n";
for(int i=0;i<n;i++) cin>>arr[i];
cout<<"Element Frequencies:\n";
for(int i=0;i<n;i++){
if(vis[i]) continue;
int c=1;
for(int j=i+1;j<n;j++) if(arr[i]==arr[j]){c++; vis[j]=true;}
cout<<arr[i]<<" -> "<<c<<endl;
}
}
