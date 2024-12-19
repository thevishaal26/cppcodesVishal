#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size -1; 
    int mid = (start + end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start = mid +1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main(){
    int a[]= {1, 2, 3, 4, 5};
    int index =  binarSearchRecursive(a,0,4, 5, 11 );
    cout<<index;
    return 0;
}