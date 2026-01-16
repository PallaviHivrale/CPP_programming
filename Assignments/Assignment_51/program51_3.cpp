/////////////////////////////////////////////////////////
//
//  Input : 10  20  30  10  30  40  10  40  10
//  value to search : 40
//  Output: 6
/////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr, int size, T no)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == no)
        {
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 40;

    int pos = SearchFirst(arr, size, value);

    if(pos != -1)
    {
        cout << "First occurrence of " << value << " is at position: " << pos << "\n";
    }  
    else
    {
        cout << value << " not found in the array.\n";
    }
        
    return 0;
}

