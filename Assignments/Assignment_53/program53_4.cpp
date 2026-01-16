////////////////////////////////////////////////////////////////////
//  to write generic program to find second smallest element
////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T SecondMin(T *arr, int iSize)
{   
    T firstMin = arr[0];
    T secondMin = arr[0];

    if(arr[0]<arr[1])
    {
        firstMin=arr[0];
        secondMin=arr[1];
    }
    else
    {
        secondMin=arr[0];
        firstMin=arr[1];
    }

    for(int i =2; i<iSize; i++)
    {
        if(arr[i]<firstMin)
        {
            secondMin = firstMin;
            firstMin = arr[i];
        }
        else if(arr[i]<secondMin)
        {
            secondMin = arr[i];
        }
    }
    return secondMin;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    
    int iSize = sizeof(arr)/sizeof(arr[0]);

    int iRet = SecondMin(arr,iSize);

    cout<<"second smallest element is: "<<iRet<<"\n";

    return 0;
}