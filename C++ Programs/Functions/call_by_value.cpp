#include <iostream>
using namespace std;

void changeValue(int number)
{
    number = 100;
    cout << "Inside Function = " << number << endl;
}

int main()
{
    int number = 25;

    changeValue(number);

    cout << "Inside Main = " << number << endl;

    return 0;
}
