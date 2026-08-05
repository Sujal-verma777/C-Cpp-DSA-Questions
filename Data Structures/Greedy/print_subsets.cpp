#include <iostream>
using namespace std;

void solve(string s,string ans,int i){
    if(i==s.size()){ cout<<ans<<endl; return; }
    solve(s,ans,i+1);
    solve(s,ans+s[i],i+1);
}
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    cout<<"Subsets:\n";
    solve(s,"",0);
}
