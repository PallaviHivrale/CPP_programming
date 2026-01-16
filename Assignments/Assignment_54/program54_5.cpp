////////////////////////////////////////////////////////////////////
//  to write generic program find smallest element form an array
////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;


template <class T>
T Min(T *arr, int size)
{
    T Min = arr[0];
    T i = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    return Min; 
}

int main()
{
    int arr[] = {11, 21, 51, 101, 111};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Smallest element: " << Min(arr, size) << "\n";

    return 0;
}
