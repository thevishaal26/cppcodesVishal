#include<iostream>
using namespace std;
int main(){
    //dynamicc arrays are used to declare an array in heap memory and we can change the size of these arrays at runtime, whereas we cannot change the size of static arrays at time
    // 2D jagged array in c++
    int rows; 
    cout<<"Enter the no of rows of array:";
    cin>>rows;
    int *numbers  = new int[rows]; //array to store no of columns in each row;
    int **array = new int*[rows]; // jagged array
    for(int i = 0; i<rows; i++){
        cout<<" Enter  no of cols in row"<<i<<": ";
        cin>>numbers[i];
        array[i] = new int[numbers[i]];
    }
    //input values in array
    for(int i = 0; i<rows; i++){
        for(int j = 0; i<cols; j++){
            cout<<"Row" <<i<<"Enter values"<<i*numbers[i];
        }
    }
}