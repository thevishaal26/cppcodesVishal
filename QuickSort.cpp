#include<iostream>
using namespace std;
void printArray(int *A, int n){
    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int partition(int *A, int l, int h){
    int pivot = A[l];
    int i = l +1;
    int j = h;
    do{
        while(A[i]<=pivot){
            i++;
        }
        while(A[j]>pivot){
            j--;
        }
        if(i<j){
            //swapping A[i] and A[j]
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }while(i<j);
    //swap A[low] and A[j]
    int temp = A[l];
    A[l] = A[j];
    A[j] = temp;
    return j;
}
void quickSort(int A[], int l, int h){
    int partitionIndex;
    if(l<h){
        partitionIndex = partition(A, l, h);
        quickSort(A, l, partitionIndex-1);
        quickSort(A, partitionIndex+1, h);
    }
}
int main(){
    int A[] = {12, 54, 65, 7, 23, 9};int n = sizeof(A)/sizeof(int);
    cout<<"Printing array before Sorting"<<endl;
    printArray(A,n );
    quickSort(A, 0, 5);
    cout<<"Printing array after Sorting"<<endl;
    printArray(A, n);
    return 0;
}