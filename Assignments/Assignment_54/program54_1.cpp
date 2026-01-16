////////////////////////////////////////////////////////////////////
//  to write generic program to search a value in an array
////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
bool Search(T *arr, int iSize, T Value)
{  
    int i = 0; 
    for(i = 0; i<iSize; i++)
    {
        if(arr[i] == Value)
        {
           return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int Value = 40;
    int iSize = sizeof(arr)/sizeof(arr[0]);

    cout<<Search(arr,iSize,Value)<<"\n";

    return 0;
}