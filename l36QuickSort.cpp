#include<iostream>
using namespace std;
int partition(int arr [], int s, int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i = s+1; i<=e; i++){
        if(arr[i]<=pivot){
            cnt ++;
        }
    }
    // place pivot at right place
    int pivotIndex = s+ cnt;
    swap(arr[pivotIndex], arr[s]);
    int i = s, j = e;
    while( i<pivotIndex &&  j>pivotIndex+1){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[i]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
}
void quickSort(int arr[],  int s, int e){
    // base case
    if(s>=e){//zero element--> sorted,, one element -->sorted
        return;
    }
    int p = partition(arr, s, e);
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}
int main(){}