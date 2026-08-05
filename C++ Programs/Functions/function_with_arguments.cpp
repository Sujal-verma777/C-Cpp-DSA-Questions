#include <iostream>
using namespace std;

void printSum(int a, int b)
{
    cout << "Sum = " << a + b << endl;
}

int main()
{
    int firstNumber, secondNumber;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    printSum(firstNumber, secondNumber);

    return 0;
}
