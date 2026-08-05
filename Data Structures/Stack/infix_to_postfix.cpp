#include <iostream>
#include <stack>
using namespace std;

int prec(char c){
    if(c=='^') return 3;
    if(c=='*'||c=='/') return 2;
    if(c=='+'||c=='-') return 1;
    return -1;
}

int main(){
    string exp,res="";
    cout<<"Enter infix expression: ";
    cin>>exp;
    stack<char> st;
    for(char c:exp){
        if(isalnum(c)) res+=c;
        else if(c=='(') st.push(c);
        else if(c==')'){
            while(!st.empty()&&st.top()!='('){res+=st.top();st.pop();}
            if(!st.empty()) st.pop();
        }else{
            while(!st.empty()&&prec(st.top())>=prec(c)){res+=st.top();st.pop();}
            st.push(c);
        }
    }
    while(!st.empty()){res+=st.top();st.pop();}
    cout<<"Postfix expression: "<<res<<endl;
}