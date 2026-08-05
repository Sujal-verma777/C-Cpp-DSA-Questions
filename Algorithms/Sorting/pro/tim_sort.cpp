#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> arr(n);

    cout<<"Enter array elements:\n";
    for(int &x:arr) cin>>x;

    sort(arr.begin(), arr.end());

    cout<<"Sorted array:\n";
    for(int x:arr) cout<<x<<" ";
    cout<<endl;

    return 0;
}