#include <iostream>
using namespace std;
int main(){
int age,marks;
cout<<"Enter age: ";cin>>age;
cout<<"Enter marks: ";cin>>marks;
cout<<"Eligible using AND : "<<(age>=18&&marks>=40)<<endl;
cout<<"Eligible using OR : "<<(age>=18||marks>=40)<<endl;
cout<<"NOT(age>=18) : "<<!(age>=18)<<endl;
return 0;
}