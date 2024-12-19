#include<iostream>
using namespace std;
int main(){
    int *ptr = 0;
    int num = 10;
    //*ptr= num--> this line will throw an error. 
    ptr = &num;
    cout<<"value after correct syntax of pointers"<< *ptr;
}