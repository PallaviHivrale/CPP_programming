////////////////////////////////////////////////////////////////////
//  to accept n value from user and return addition of that value 
////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T AddN(T *arr, int iSize)
{
    T Sum = 0;
    
    for(int i = 0; i<iSize; i++)
    {
        Sum = Sum + arr[i];
    }
    return Sum;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iSum = AddN(arr,5);
    cout << "Addition of int array: " << iSum <<"\n";


    float fSum = AddN(brr,4);
    cout<<"Addition of float array : "<<fSum<<"\n";

    return 0;

}