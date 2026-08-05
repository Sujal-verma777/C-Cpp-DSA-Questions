#include <iostream>
using namespace std;
int main()
{
    int n, t, r, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    t = n;
    while (n)
    {
        r = n % 10;
        sum += r * r * r;
        n /= 10;
    }
    if (sum == t)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";
    return 0;
}