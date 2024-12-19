#include<iostream>
using namespace std;
int power(int a, int b){
    // base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans = power(a, b/2);
    if(b%2==0){
        return ans * ans;
    }else{
        return a*ans*ans;
    }
}
int main(){
    
    int a, b;int choice = 1;
    while(choice){
        cout<<"Enter the value of a and b"<<endl;
        cin>>a >>b;
    cout<<power(a,b);
    cout<<endl<<"Enter 0 to stop taking input ";
    cin>>choice;
    }
    
}