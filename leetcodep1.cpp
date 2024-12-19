#include<iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    int req;int k = 2;
    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            if(arr[j] = arr[i]){
                k = k-1;
            }
            
        }
        if(k==1){
            req = i;
            return arr[req];
        }
        k=2;
        
    }
    
}
int main(){
    int a [5]= { 4, 3,  6, 3, 6};
    cout<<"The unique element is:"<<findUnique(a, 5);
    cout<<findUnique(a, 5);
    return 0;
}