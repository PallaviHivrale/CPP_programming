////////////////////////////////////////////////////////////////////
//  to accept n value from user and return largest of that value 
////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Max(T *arr, int iSize)
{
    T Max = 0;
    
    for(int i = 0; i<iSize; i++)
    {
        if(arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    return Max;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iSum = Max(arr,5);
    cout << "Maximum number of int array: " << iSum <<"\n";


    float fSum = Max(brr,4);
    cout<<"Maximum number of float array : "<<fSum<<"\n";

    return 0;

}