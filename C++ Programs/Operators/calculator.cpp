#include <iostream>
using namespace std;
int main(){
int ch; float a,b;
cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
cout<<"Enter choice: ";cin>>ch;
cout<<"Enter two numbers: ";cin>>a>>b;
switch(ch){
case 1: cout<<"Answer = "<<a+b; break;
case 2: cout<<"Answer = "<<a-b; break;
case 3: cout<<"Answer = "<<a*b; break;
case 4: if(b!=0) cout<<"Answer = "<<a/b; else cout<<"Division by zero is not allowed."; break;
default: cout<<"Invalid choice.";
}
return 0;
}