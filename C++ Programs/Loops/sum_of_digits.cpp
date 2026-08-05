#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter number: ";
    cin >> n;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << "Sum of digits = " << sum;
    return 0;
}