#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<float> arr(n);
    cout<<"Enter "<<n<<" floating point values (0 to 1):\n";
    for(float &x:arr) cin>>x;

    vector<vector<float>> bucket(n);
    for(float x:arr) bucket[int(n*x)].push_back(x);

    for(auto &b:bucket) sort(b.begin(),b.end());

    cout<<"Sorted array:\n";
    for(auto &b:bucket)
        for(float x:b) cout<<x<<" ";
    cout<<endl;
}