#include <iostream>
using namespace std;
int partition(int a[],int low,int high){
    int pivot=a[high],i=low-1;
    for(int j=low;j<high;j++) if(a[j]<pivot) swap(a[++i],a[j]);
    swap(a[i+1],a[high]); return i+1;
}
void quickSort(int a[],int l,int h){
    if(l<h){
        int p=partition(a,l,h);
        quickSort(a,l,p-1); quickSort(a,p+1,h);
    }
}
int main(){
    int n; cout<<"Enter number of elements: "; cin>>n;
    int a[n]; cout<<"Enter array elements:\n";
    for(int i=0;i<n;i++) cin>>a[i];
    quickSort(a,0,n-1);
    cout<<"Sorted array:\n";
    for(int x:a) cout<<x<<" ";
    cout<<endl;
}