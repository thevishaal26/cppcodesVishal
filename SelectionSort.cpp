#include<iostream>
using namespace std;
void printArray(int *A, int n){
    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void SelectionSort(int *A, int n){
    for(int i = 0; i<n; i++){
        int indexOfMin = i;
        for(int j = i+1; j<n; j++){
            if(A[j]<A[indexOfMin]){
                indexOfMin = j;
            }
        }
        //swapping A[indexOfMin] and A[i]
        int temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin]  = temp;
    }
}
int main(){
    int A[] = {12, 54, 65, 7, 23, 9};int n = sizeof(A)/sizeof(int);
    cout<<"Printing array before Sorting"<<endl;
    printArray(A,n );
    SelectionSort(A, n);
    cout<<"Printing array after Sorting"<<endl;
    printArray(A, n);
}