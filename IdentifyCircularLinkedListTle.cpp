#include<iostream>
using namespace std;
bool isCircular(Node* head){
    if(head == NULL){
        return true;
    }
    Node*temp = head->next;
    // bool vishal= true;
    while(temp!=NULL && temp!=head){
        if(temp== head){
           return true;
        }
        temp = temp->next;
    }
    return false;
}
Node*floydDetectLoop(Node *head){
    if(head == NULL){
        return ;
    }
    Node*slow = head;
    Node*fast = head;
    while(slow!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow== fast){
            return fast;
        }
    }
    return NULL ;
}

Node* getStartingNode(Node *head){
    if(head == NULL){
        return NULL;
    }
    Node*intersection = floydDetectionLoop(head);
    Node slow = head;
    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
void removeLoop(Node*head){
    if(head == NULL){
        return;
    }
    Node*startOfLoop = getStartingNode(head);
    Node*temp = startOfLoop;
    while(temp->next !=startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;
}
int main(){}