#include <iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // cout<<"Enter the value \n";
    // cin>>arr[0]; 
    /*
        all the above code is bad practice b'coz stack memory is allocated and we can't create array of variable size like this.
        so to create array of variable size we should use heap memory*/
        // we can use heap memory by using new keyword;
        new char;
        new int; 
        new float;
        int* ptr = new int;
        // ptr is allocated in stack memery and new int is allocated in heap memory.
        //for creating array we can do like this.
        //int *arr = new int[];
        // for above bad practice soln is below
        int n;
        cout<<"Enter the value of n"<<endl;
        cin>>n;
        int *arr = new int[n];
        //taking inputs

        for(int i = 0; i<n; i++){
            cout<<"Enter the value of arr["<<i<<"]";
            cin>>arr[i];
        }
        //printing array
        for(int i = 0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        /// very important things is 
        //arr[i] = *(arr+i);
        //once we allocate some memory in heap memory using dma then we will have the delete it also using 'delete' keyword
        delete [] arr;// for deleting array
        int * i = new int;
        delete i; // for deletin i;
        


}