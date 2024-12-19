#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor.
    Node(int data){
        this->data = data;
        this-> next = NULL;
    }
    // Destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next !=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data"<<value <<endl;
    }
};
void InsertAtHead(Node* &head, int d){
    Node*temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp ->data<<" ";
        temp = temp-> next;
    }
    cout<<endl;
}
void InsertAtTail(Node *&tail, int d){
    Node * temp = new Node(d);
    tail-> next = temp;
    tail = tail->next;
}
void InsertAtPosition(Node*&tail, Node* &head, int position, int d){
    Node*temp = head;
    int cnt = 1;
    if(position==1){
        InsertAtHead(head,d);
        return;
    }
    while(cnt<position-1){
        temp= temp->next;
        cnt++;
    } 
    //inserting at Position
    if(temp->next == NULL){
        InsertAtTail(tail, d);
    }
    Node*nodeToInsert = new Node(d);
    nodeToInsert-> next = temp ->next;
    temp->next = nodeToInsert;
}
void deleteNode(int position, Node*&head){
    // deleting first or start node
    if(position==1){
        Node* temp = head;
        head  = head->next;
        temp->next = NULL;
        //memory free start node
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node*curr = head;
        Node*prev = NULL;
        int cnt = 1;
        while(cnt <=position){
            prev = curr;
            curr= curr->next;
            cnt++;
        }
        prev ->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    Node*node1 = new Node(10);
    // cout<< node1->data<<endl;
    // cout<<node1->next<<endl;
    // head pointed to node1
    Node* head = node1;
    Node*tail = node1;
    print(head);
    InsertAtHead(head, 12);
    InsertAtHead(head, 15);
    print(head);
    InsertAtTail(tail, 88);
    print(head);
    InsertAtPosition(tail,head, 3, 99);
    print(head);
    deleteNode(1, head);

}