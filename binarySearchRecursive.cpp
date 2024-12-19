#include<iostream>
using namespace std;
int binarySearch(int arr[], int target, int left, int right){
        if(left<=right){
            int mid = left+(right-left)/2;
            if(arr[mid]== target){
                return mid;//Element found at index mid
            }
            if(arr[mid]<target){
                return binarySearch(arr, target, mid+1, right);//Search right half
            }
            return binarySearch(arr, target , left, mid- 1);//Search left half
        }
        return -1;
    }
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 7;
    int n = sizeof(arr)/sizeof(int);
    int result = binarySearch(arr, target, 0, n-1);
    if(result!=-1){
        cout<<"Elememt found at index "<<result<<endl;

    }
    else{
        cout<<"Elemet not found in the array."<<endl;
    }
    return 0;
}