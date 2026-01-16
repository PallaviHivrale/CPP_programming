////////////////////////////////////////////////////////////////////
//  to write generic program to replace all occurances of values
////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
void Replace(T *arr, int iSize, T oldVal, T newVal)
{  
    int i = 0; 
    for(i = 0; i<iSize; i++)
    {
        if(arr[i] == oldVal)
        {
            arr[i] = newVal;
        }
    }
}

template <class T>
void Display(T *arr, int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        cout << arr[i] << "\t";
    }
    cout <<"\n";
}

int main()
{
    int arr[] = {10,20,10,40,50};
    int iSize = 5;
    
    cout << "Before replacement: ";
    Display(arr,iSize);

    Replace(arr, iSize,10,99);

    cout << "After replacement: ";
    Display(arr, iSize);

    return 0;
}