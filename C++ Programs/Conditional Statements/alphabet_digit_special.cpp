#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (isalpha(ch))
        cout << "Alphabet";
    else if (isdigit(ch))
        cout << "Digit";
    else
        cout << "Special Character";
    return 0;
}