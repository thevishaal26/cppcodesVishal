#include<iostream>
#include<map>
using namespace std;
bool detectLoop(Node *head){
    if(head == NULL){
        return false;
    }
    map<Node, bool> Visited;
    Node*temp = head;//Visited is a map that has the node as key and value as true or false. The boolean variable will be used to check if it's already been visited before. If so then we can return true, otherwise we'll keep going until we reach the end of the list.
    Node * temp = head;//temp is a pointer that points to the node that's currently being checked if it has been visited before or not. If so then we can return true, otherwise we'll keep going until we reach the end of the list.
    while(temp!= NULL){
        if(Visited[temp]== true){
            cou<<"Present on element";//If it's already been visited before then we can return true, otherwise we'll keep going until we reach the end of the list.
            return true;
        }
        visited[temp] = true;
        temp = temp-> next;
    }
    return false;
}
int main(){}