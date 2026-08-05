#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x):data(x),next(nullptr){}
};

class Stack{
    Node* top=nullptr;
public:
    void push(int x){
        Node* n=new Node(x);
        n->next=top;
        top=n;
    }
    void pop(){
        if(!top){cout<<"Stack is empty.\n";return;}
        cout<<"Removed: "<<top->data<<endl;
        Node* t=top; top=top->next; delete t;
    }
    void display(){
        if(!top){cout<<"Stack is empty.\n";return;}
        cout<<"Stack elements:\n";
        for(Node* p=top;p;p=p->next) cout<<p->data<<" ";
        cout<<endl;
    }
};

int main(){
    Stack st;
    st.push(5); st.push(15); st.push(25);
    st.display();
    st.pop();
    st.display();
}