#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int first, second;

    cout << "Enter two numbers: ";
    cin >> first >> second;

    swapNumbers(first, second);

    cout << "After Swapping: " << first << " " << second << endl;

    return 0;
}
