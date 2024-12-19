#include<iostream>
using namespace std;
//Node structure
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

// Stack class using Linked list
class Stack{
    public:
    Node*top;
    Stack(){
        top = nullptr;
    }
    void push(int element){ //push the element in stack. Time complexity is O(1) as we are not traversing any list or node. Space Complexity is O(n) because we have to traverse all nodes of linkedlist.  
    Node*newNode = new Node(element);
    newNode->next= top;
    top = newNode;
    cout<<element<<"successfully added to the top of Stack"<<endl;
    }
    void pop(){
        if(top!=nullptr){
            Node* temp = top;
            top = top->next; //temp is a pointer to the node which we want to delete. So, here we are just deleting the first element of stack.
            delete temp;
            cout<<"Element Popped out from the Stack"<<endl;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    int peek(){
        if(top!=nullptr){
            return top->data;
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        return top == nullptr;
    }
};
int main(){
    Stack st;
    st.push(1);
    st.push(4);
    st.push(3);
    st.push(23);
    st.push(77);
    cout<<"Top element is: "<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<"Stack is empty: "<<(st.isEmpty() ? "true": "false")<<endl;
    return 0;
}