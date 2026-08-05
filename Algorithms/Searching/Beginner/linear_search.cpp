#include <iostream>
using namespace std;
int main(){
    int n,target;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:\n";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter element to search: ";
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"Element found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"Element not found."<<endl;
}