#include <iostream>
using namespace std;

void display(string name = "Guest")
{
    cout << "Welcome " << name << endl;
}

int main()
{
    display();
    display("Sujal");

    return 0;
}
