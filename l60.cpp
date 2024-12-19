#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(11);
    q.push(22);
    q.push(33);
    cout<<"Size of queue is:"<<q.size()<<endl;
    q.pop();
    q.pop();
    q.pop();
    if(q.empty()){
        cout<<"queue is empty";
    }
    else{
        cout<<"Queue is not empty";
    }
}