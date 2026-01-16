/////////////////////////////////////////////////////////
//
//  Input : 10  20  30  10  30  40  10  40  10
//  value to check frequency : 10
//  Output: 4  
/////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template<class T>
int Frequency(T *arr, int size, T no)
{
    int Count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == no)
        {
            Count++;
        }
    }
    return Count;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iSize = sizeof(arr)/sizeof(arr[0]);
    int iRet = Frequency(arr, iSize, 10);

    cout << "Frequency of 10 is: " << iRet << "\n";

    return 0;
}
