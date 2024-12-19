#include<iostream>
using namespace std;
void reverseArray(int *a, int n){
    int b[n];
for(int i = 0; i<n; i++){
    b[i] = a[n-1-i];
}
for(int i = 0; i <n ; i++){
    a[i] = b[i];
}
cout<<"Array after reversing"<<endl;
for(int i = 0; i<n; i++){
    cout<<a[i]<<endl;
}
}

int main(){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverseArray(a, 10);

}