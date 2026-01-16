////////////////////////////////////////////////////////////////////
//  to write generic program to copy one array into  another
////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
void CopyArray(T *src, T *dest,T iSize)
{   
    for(int i = 0; i<iSize; i++)
    {
        dest[i] = src[i];
    }
}

template<class T>
void PrintArray(T *arr, int iSize)
{
    for(int i = 0; i<iSize; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    
}
int main()
{
    int arr[] = {10,20,30,40,50};
    int brr[5] = {0};

    CopyArray(arr, brr, 5);

    cout << "copied Array : "<<"\n";
    PrintArray(brr,5);

    return 0;

}