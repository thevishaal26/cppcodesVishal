#include<iostream>
using namespace std;
using namespace std;
bool checkPalindrome(string str, int i, int j){
    if(i>j){
        return false;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        //Recursive call
        return checkPalindrome(str, i+1, j-1);
    }
}
void reverse(string &str, int i , int j){
    //base case
    if(i>j){
        return;
    }
    swap(str[i], str[j]);
    i++;j--;
    reverse(str, i, j);
}
void reverseWithoutRecursion(string &str, int i, int j){
    while(i<=j){
        swap(str[i], str[j]);
        i++; j--;
    }
}
int main(){
    string name = "babbar";
    cout<<endl;
    bool isPalindrome = checkPalindrome(name, 0, name.length()-1);
    if(isPalindrome){
        cout<<"It is a Palindrome";
    }
    reverse(name, 0, name.length()-1);
    cout<<name;
    reverseWithoutRecursion(name, 0, name.length()-1);
    cout<<name;
}