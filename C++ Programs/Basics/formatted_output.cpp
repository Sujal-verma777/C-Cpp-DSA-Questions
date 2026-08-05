#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float marks;

    cout << "Enter marks: ";
    cin >> marks;

    cout << fixed << setprecision(2);
    cout << "Marks: " << marks << endl;

    return 0;
}
