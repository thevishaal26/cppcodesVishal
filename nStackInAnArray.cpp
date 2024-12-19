#include<iostream>
using namespace std;
class Kstack{
    int *arr;// array of size n to store actual content
    int *top;
    int *next;
    int n,k;
    int free;
    bool isFull()   {  return (free == -1);  }
    // constructor to create k size in an array of size n;
    Kstack(int n , int k){
        arr = new int[n];
        top = new int[k];
        next = new int[k];
        //initialize all stacks as empty
        for(int i = 0; i<k; i++){
            top[i] = -1;
        }
        for(int i = 0; i<n; i++){
            next[i] = i+1;
        }
        next[n-1] = -1; // -1 is used to indicate end of free list
    }
    void push(int item, int sn){
        if(isFull()){
            cout<<"\n Stack overflow\n";
            return ;
        }
        int i = free;
        free = next[i];
        top[sn] = i;
        arr[i] = item;
    }
    int pop(int sn){
        if(isEmpty(sn)){
            cout<<"\n Underflow \n";
            return INT_MAX;
        }
        else{
            i = top[sn];
            top[sn] = next[i];
            next[i] = free;
            free = i;
            return arr[i];
        }
    }
};
int main(){}