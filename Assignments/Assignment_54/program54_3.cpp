////////////////////////////////////////////////////////////////////
//  to write generic program to find sum of all odd element
////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T SumOdd(T *arr, int size)
{
    T isum = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            isum = isum + arr[i];
        }
    }
    return isum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of odd elements: " << SumEven(arr, size) <<"\n";

    return 0;
}
