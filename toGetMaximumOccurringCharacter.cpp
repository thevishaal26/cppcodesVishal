#include<iostream>
using namespace std;
char getMaxOccurringCharacter(string s){
    // create an array of count of characters
    int arr[26] = {0};
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        int number  = 0;
        number = ch - 'a';
        arr[number]++;
    }
    // Find maximum occ character
    int maxi = -1; int ans = 0;
    for(int i= 0; i<26; i++){
        if(maxi< arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}
int main(){
    string vishal ;
    while(true){
        cout<<" Enter a string " <<endl;
    cin>>vishal;
    cout<<" the maximum occuring character in input string is:"<<getMaxOccurringCharacter(vishal)<<endl;
    }
}