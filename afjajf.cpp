#include<iostream>
using namespace std;
 int missingNumber(int *array, int n) {
        int temp;
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    int k = 1;
       while(k<=n){
    if(k == array[k-1]){
        k++;
    }
    else{
        return k;
    }
}

// If the loop completes without finding a missing number, return n+1
return n+1;
        
       }
int main(){
    int arr[] = {1, 2, 3,5};
   cout<< missingNumber(arr, 5);
}