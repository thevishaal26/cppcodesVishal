#include<iostream>
using namespace std;
void print(int arr[], int s, int e){
    for(int i = s; i<=e; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool LinearSearch(int arr[], int size, int k){
    // base case
    
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingPart = LinearSearch(arr+1, size-1, k);
        return remainingPart;
    }
}
int binarySearch(int arr[], int s, int e, int k){
    //base case
    print(arr,s, e);
    if(s>e){
        return false;
    }
    int mid = s+ (e-s)/2;
    if(arr[mid] == k){
        return mid;
    }
    if(arr[mid]<k){
        binarySearch(arr, mid+1, e, k);
    }
    else{
        binarySearch(arr, s, mid-1, k);
    }
}
int main(){
    int arr[6] = {2, 4, 6, 10,14, 16};
    int size = 6;
    int key = 10;
    cout<<"Present or not "<<binarySearch(arr, 0, 5, key)<<endl;
}