#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    cout << "Integer Sum = " << add(10, 20) << endl;
    cout << "Decimal Sum = " << add(12.5, 7.5) << endl;

    return 0;
}
