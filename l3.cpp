#include <iostream>
using namespace std;
int main(){
    // int a = 6;
    // int b = 7;
    // if(a>b){
    //     cout<<"a is greater than b";
    // }
    // else{
    //     cout<<"b is greater than a";
    // }
    // cout << "The value of a is:"<<a;
    //int a, b;
    // //cin>> a >>b;
    // cout<<"The value of a and b is" << a <<" " <<b;
    // a = cin.get();// a = '1';
    // cout<< "The value of a is"<<a;
    // pattern printing;
   int n;
   cin>>n;
//    int i = 1;
//    while (i<=n){
//     int j = 1;
//     while(j<=n){
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
//    }
int i = 1;
while(i<=n){
    int j = 1;
    while(j<=i){
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
}
}
