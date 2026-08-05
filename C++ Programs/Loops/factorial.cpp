#include <iostream>
using namespace std;
int main()
{
    int n;
    long long f = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        f *= i;
    cout << "Factorial = " << f;
    return 0;
}