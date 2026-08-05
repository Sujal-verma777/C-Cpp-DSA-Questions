#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s;
    cout<<"Enter an expression: ";
    cin>>s;
    stack<char> st;
    bool ok=true;
    for(char c:s){
        if(c=='('||c=='{'||c=='[') st.push(c);
        else{
            if(st.empty()){ok=false;break;}
            char t=st.top(); st.pop();
            if((c==')'&&t!='(')||(c=='}'&&t!='{')||(c==']'&&t!='[')){ok=false;break;}
        }
    }
    if(!st.empty()) ok=false;
    cout<<(ok?"Balanced expression.":"Not balanced.")<<endl;
}