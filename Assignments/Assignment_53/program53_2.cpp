////////////////////////////////////////////////////////////////////
//  to write generic program to check whether array is sorted
////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
bool CheckSorted(T *arr, int iSize)
{   
    for(int i = 1; i<iSize; i++)
    {
        if(arr[i] < arr[i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {2,3,4,5,6};
    int Size = sizeof(arr)/sizeof(arr[0]);

    bool bRet = CheckSorted(arr,Size);

    if(bRet)
    {
        cout << "The array is sorted.\n";
    }
    else
    {
        cout << "The array is NOT sorted.\n";
    }


    return 0;
}