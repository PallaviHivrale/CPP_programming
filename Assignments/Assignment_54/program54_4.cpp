////////////////////////////////////////////////////////////////////
//  to write generic program to reverse an array
////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;


template <class T>
void Reverse(T *arr, int size)
{
    int start = 0, end = size - 1;
    while (start < end) 
    {
        T temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

// Function to print the array
template <class T>
void PrintArray(T *arr, int size) 
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
       
    cout <<"\n";
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);

    Reverse(arr, size);

    cout << "Reversed array: ";
    PrintArray(arr, size);

    return 0;
}
