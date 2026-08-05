#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: ";cin>>n;
cout<<"Initial: "<<n<<endl;
n+=5; cout<<"After +=5 : "<<n<<endl;
n-=2; cout<<"After -=2 : "<<n<<endl;
n*=3; cout<<"After *=3 : "<<n<<endl;
n/=2; cout<<"After /=2 : "<<n<<endl;
return 0;
}