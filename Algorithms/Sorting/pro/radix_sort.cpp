#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countingSort(vector<int>& a,int exp){
    vector<int> out(a.size());
    int cnt[10]={0};
    for(int x:a) cnt[(x/exp)%10]++;
    for(int i=1;i<10;i++) cnt[i]+=cnt[i-1];
    for(int i=a.size()-1;i>=0;i--){
        int d=(a[i]/exp)%10;
        out[--cnt[d]]=a[i];
    }
    a=out;
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter array elements:\n";
    for(int &x:a) cin>>x;
    int mx=*max_element(a.begin(),a.end());
    for(int exp=1;mx/exp>0;exp*=10) countingSort(a,exp);
    cout<<"Sorted array:\n";
    for(int x:a) cout<<x<<" ";
    cout<<endl;
}