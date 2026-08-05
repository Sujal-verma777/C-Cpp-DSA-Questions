#include <iostream>
using namespace std;

inline int cube(int number)
{
    return number * number * number;
}

int main()
{
    int value;

    cout << "Enter a number: ";
    cin >> value;

    cout << "Cube = " << cube(value) << endl;

    return 0;
}
