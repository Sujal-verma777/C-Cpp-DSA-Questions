#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a letter: ";
    cin >> ch;
    if (isupper(ch))
        cout << "Uppercase";
    else if (islower(ch))
        cout << "Lowercase";
    else
        cout << "Not an alphabet";
    return 0;
}