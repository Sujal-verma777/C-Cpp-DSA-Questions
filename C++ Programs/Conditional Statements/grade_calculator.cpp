#include <iostream>
using namespace std;
int main()
{
    float m;
    cout << "Enter percentage: ";
    cin >> m;
    if (m >= 90)
        cout << "A+";
    else if (m >= 80)
        cout << "A";
    else if (m >= 70)
        cout << "B";
    else if (m >= 60)
        cout << "C";
    else if (m >= 40)
        cout << "D";
    else
        cout << "Fail";
    return 0;
}