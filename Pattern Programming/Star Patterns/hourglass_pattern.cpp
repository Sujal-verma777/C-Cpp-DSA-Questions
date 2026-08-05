#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i=rows;i>=1;i--){for(int s=0;s<rows-i;s++) cout<<" "; for(int j=0;j<2*i-1;j++) cout<<"*"; cout<<endl;}
    for(int i=2;i<=rows;i++){for(int s=0;s<rows-i;s++) cout<<" "; for(int j=0;j<2*i-1;j++) cout<<"*"; cout<<endl;}

    return 0;
}
