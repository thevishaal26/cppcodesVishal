#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapAlternate(int *a, int n)
{
    int i = 1;
    int temp;
    while (i < n)
    {
        cout << "reversing" << a[i - 1] << "and" << a[i] << endl;
        temp = a[i - 1];
        a[i - 1] = a[i];
        a[i] = temp;
        i = i + 2;
    }
    cout << "printing array after operation" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
void swapalternateBabbar(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = { 11, 23, 9, 76, 4};
    swapalternateBabbar(even, 8);
    printArray(even, 8);
}