#include<iostream>
using namespace std;
void printArray(int *A, int n){
    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void insertionSort(int *A, int n){
    for(int i=1; i<n;i++){
        cout<<"Running insertion sort pass number "<<i<<endl;
        int j = i-1; int key = A[i];
        while(j>=0 && A[j]>key){
            // swap A[i] and A[j]
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}
int main(){
        int A[] = {12, 54, 65, 7, 23, 9};int n = sizeof(A)/sizeof(int);
    cout<<"Printing array before Sorting"<<endl;
    printArray(A,n );
    insertionSort(A, n);
    cout<<"Printing array after Sorting"<<endl;
    printArray(A, n);
    return 0;
}