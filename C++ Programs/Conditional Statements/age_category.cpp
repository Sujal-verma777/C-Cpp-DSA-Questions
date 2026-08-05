#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;
    if (age < 13)
        cout << "Child";
    else if (age < 20)
        cout << "Teenager";
    else if (age < 60)
        cout << "Adult";
    else
        cout << "Senior Citizen";
    return 0;
}