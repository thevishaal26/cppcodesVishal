#include<iostream>
using namespace std;
int firstOccurence(int arr[], int n, int key){
    int s = 0; int e = n-1;
    int mid = s+ (e-s)/2;
    int ans = -1;
    while (s<=e){
        if(arr[mid] == key){
            ans = mid ; 
            e = mid-1;
        }
        else if(arr[mid]>key){
            e = mid - 1; 
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    } 
    return ans;
}
int lastOccurence(int arr[], int n, int key){
    int s = 0; int e = n-1;
    int mid = s+ (e-s)/2;
    int ans = -1;
    while (s<=e){
        if(arr[mid] == key){
            ans = mid ; 
            s= mid+1;
        }
        else if(arr[mid]>key){
            e = mid - 1; 
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    } 
    return ans;
}
int main(){
    int arr[] = {1, 2, 3, 3, 3, 3, 3, 3, 5};
    cout<<"First occurence of 3 is at index "<<firstOccurence(arr, 9, 3)<<endl;
    cout<<"last occurence of 3 is at index "<<lastOccurence(arr, 9, 3);
}