#include <iostream>
using namespace std;
int main()
{
    int age, marks;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter marks: ";
    cin >> marks;
    if (age >= 18)
    {
        if (marks >= 40)
            cout << "Eligible";
        else
            cout << "Marks too low";
    }
    else
        cout << "Underage";
    return 0;
}