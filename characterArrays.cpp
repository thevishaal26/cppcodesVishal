#include<iostream>
using namespace std;
#include <vector>
char toLowerCase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;}
        else{
            char temp = ch- 'A'+'a';
            return temp;
        }
    }

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}
int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i]!='\0'; i++){
        count ++;
    }
    return count;
}
bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(toLowerCase(a[s])!=toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int main(){
    // char name [120];
    // cout<<"Enter your  name."<<endl;
    // cin>> name;
    // // name[2] = '\0';VishalSaloniKiMammiSePyarKartaHa
    // cout<<"Your name is "<<name<<endl;
    // int n = getLength(name);
    // reverse(name,n );
    // cout<<"String after reversing\n"<< name;
    cout<<"CHARACTER IS "<<toLowerCase('b')<<endl;
    cout<<"CHARACTER IS "<< toLowerCase('v');
}