#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a != b){
        if(a>b){
            a = a-b;
        }
        else{
            b = a-b;
        }
    }
    return a;
}
int main(){
    /*
    lcm(a,b)*gcd(a,b) = a*b;
    gcd is nothing but hcf;
    
    */
}