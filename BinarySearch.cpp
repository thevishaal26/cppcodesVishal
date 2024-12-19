#include<iostream>
using namespace std;
int binarySearch(int arr [], int target, int size){
    int l = 0; int h = size-1; 
    while(l<=h){
        int mid = l + (h-l)/2;
        if(arr[mid]== target){
            return mid;
        }
        else if(arr[mid]>target){
            h = mid -1;
        }
        else{
         l= mid+1;   
        }
    }
    return -1;
}
double moreprecision(int n, int precision, int tempSol){
    int i;
    double factor = i;
    double ans = tempSol;
    for(int i = 0; i<precision; i++){
        factor = factor/10;
        for(double j=ans;j*j<n; j=j+factor);
    }
}
int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a)/sizeof(int);
    int b = binarySearch(a, 7, n);
    if(b==-1){
        cout<<"target element is not present";
    }
    else{
        cout<<"element found at index "<<b;
    }
    return 0;
}