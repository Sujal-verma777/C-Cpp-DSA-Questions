#include <iostream>
using namespace std;
int main()
{
    int n, r, rev = 0;
    cout << "Enter number: ";
    cin >> n;
    while (n)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    cout << "Reverse = " << rev;
    return 0;
}