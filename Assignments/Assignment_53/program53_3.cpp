////////////////////////////////////////////////////////////////////
//  to write generic program to find second largest element
////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T SecondMax(T *arr, int iSize)
{   
    T firstMax = arr[0];
    T secondMax = arr[0];

    if(arr[0]>arr[1])
    {
        firstMax=arr[0];
        secondMax=arr[1];
    }
    else
    {
        secondMax=arr[0];
        firstMax=arr[1];
    }

    for(int i =2; i<iSize; i++)
    {
        if(arr[i]>firstMax)
        {
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if(arr[i]>secondMax)
        {
            secondMax = arr[i];
        }
    }
    return secondMax;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    
    int iSize = sizeof(arr)/sizeof(arr[0]);

    int iRet = SecondMax(arr,iSize);

    cout<<"second largest element is: "<<iRet<<"\n";

    return 0;
}