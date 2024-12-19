#include<iostream>
using namespace std;
int findUnique(int arr[]){
    int ans = 0; 
    for(int i = 0; i<6;i++){
        ans = ans^arr[i];

    }
    for(int i = 1; i<6; i++){
        ans = ans^i;
    }
    return ans;
}
int main(){
    int arr []= {1, 2, 3, 1, 5, 6};
    cout<<findUnique(arr);

}