#include<iostream>
using namespace std;
void printArray(int *A, int n){
    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int *A, int n){
    int temp; int isSorted = 0;
    for(int i = 0; i<n-1; i++){
        cout<<"Working for pass number: "<<i+1<<endl;
        isSorted = 1;
        for(int j = 0; j<n-i-1; j++){
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted){
            return;
        }
    }
}
int main(){
    int A[] = {12, 54, 65, 7, 23, 9};int n = sizeof(A)/sizeof(int);
    cout<<"Printing array before Sorting"<<endl;
    printArray(A,n );
    bubbleSort(A, n);
    cout<<"Printing array after Sorting"<<endl;
    printArray(A, n);
    return 0;}