/////////////////////////////////////////////////////////
//
//  Input : 10  20  30  10  30  40  10  40  10
//  value to search : 40
//  Output: 8
/////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template<class T>
int SearchLast(T *arr, int size, T no)
{
    int pos = -1;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == no)
        {
            pos = i+1;
        }
    }
    return pos;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 40;

    int pos = SearchLast(arr, size, value);

    if(pos != -1)
    {
        cout << "Last occurrence of " << value << " is at position: " << pos << "\n";
    }  
    else
    {
        cout << value << " not found in the array.\n";
    }
        
    return 0;
}

