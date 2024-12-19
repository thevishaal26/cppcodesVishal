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
    for(int i = 1; i<n-1;i++){
        if(i!=array[i]){
            return i;
        }
    }
    }
int main(){
  int  arr[] = {1, 3, 4, 5, 6, 7};
    int n = 6;
   cout<<missingNumber(arr ,n);
}