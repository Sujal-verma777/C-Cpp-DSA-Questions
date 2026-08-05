#include <iostream>
using namespace std;

int fibonacci(int number)
{
    if(number <= 1)
        return number;

    return fibonacci(number - 1) + fibonacci(number - 2);
}

int main()
{
    int terms;

    cout << "Enter number of terms: ";
    cin >> terms;

    for(int i = 0; i < terms; i++)
        cout << fibonacci(i) << " ";

    return 0;
}
