#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++)
            cout<<((i==1||i==rows||j==1||j==rows)?'*':' ');
        cout<<endl;
    }

    return 0;
}
