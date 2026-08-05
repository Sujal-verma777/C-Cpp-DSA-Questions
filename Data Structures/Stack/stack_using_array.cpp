#include <iostream>
using namespace std;

class Stack{
    int top,size,*arr;
public:
    Stack(int s){size=s;arr=new int[size];top=-1;}
    bool isFull(){return top==size-1;}
    bool isEmpty(){return top==-1;}
    void push(int x){
        if(isFull()){cout<<"Stack Overflow\n";return;}
        arr[++top]=x;
        cout<<x<<" pushed successfully.\n";
    }
    void pop(){
        if(isEmpty()){cout<<"Stack Underflow\n";return;}
        cout<<"Removed element: "<<arr[top--]<<endl;
    }
    void peek(){
        if(isEmpty()) cout<<"Stack is empty.\n";
        else cout<<"Top element: "<<arr[top]<<endl;
    }
    void display(){
        if(isEmpty()){cout<<"Stack is empty.\n";return;}
        cout<<"Stack elements:\n";
        for(int i=top;i>=0;i--) cout<<arr[i]<<" ";
        cout<<endl;
    }
};

int main(){
    int size;
    cout<<"Enter stack size: ";
    cin>>size;
    Stack st(size);
    st.push(10); st.push(20); st.push(30);
    st.display();
    st.peek();
    st.pop();
    st.display();
}