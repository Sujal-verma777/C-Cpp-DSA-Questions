#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    if(rows%2==0) rows++; for(int i=0;i<rows;i++){for(int j=0;j<rows;j++) cout<<((i==rows/2||j==rows/2)?'*':' '); cout<<endl;}

    return 0;
}
