#include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the value of n: ";
cin>>n;
int arr[n-1];
cout<<"Enter "<<n-1<<" distinct numbers from 1 to "<<n<<":\n";
for(int i=0;i<n-1;i++) cin>>arr[i];
int expected=n*(n+1)/2, actual=0;
for(int i=0;i<n-1;i++) actual+=arr[i];
cout<<"The missing number is: "<<expected-actual<<endl;
}
