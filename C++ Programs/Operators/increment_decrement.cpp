#include <iostream>
using namespace std;
int main(){
int x;
cout<<"Enter a number: ";cin>>x;
cout<<"Post Increment: "<<x++<<endl;
cout<<"Current: "<<x<<endl;
cout<<"Pre Increment: "<<++x<<endl;
cout<<"Post Decrement: "<<x--<<endl;
cout<<"Current: "<<x<<endl;
cout<<"Pre Decrement: "<<--x<<endl;
return 0;
}