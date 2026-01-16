////////////////////////////////////////////////////////////////////
//  to accept n value from user and return smallest  value 
////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int iSize)
{
    T Min = arr[0];
    
    for(int i = 0; i<iSize; i++)
    {
        if(arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    return Min;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iSum = Min(arr,5);
    cout << "Minimum number of int array: " << iSum <<"\n";

    float fSum = Min(brr,4);
    cout<<"Minimum number of float array : "<<fSum<<"\n";

    return 0;

}