#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){for(int j=1;j<=i;j++) cout<<"*"; for(int s=1;s<=2*(rows-i);s++) cout<<" "; for(int j=1;j<=i;j++) cout<<"*"; cout<<endl;}
    for(int i=rows;i>=1;i--){for(int j=1;j<=i;j++) cout<<"*"; for(int s=1;s<=2*(rows-i);s++) cout<<" "; for(int j=1;j<=i;j++) cout<<"*"; cout<<endl;}

    return 0;
}
