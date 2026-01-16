/////////////////////////////////////////////////////////
//
//  Input : M   7
//  Output: M   M   M   M   M   M   M   
//
//  Input:  11  3
//  Output: 11  11  11
/////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

template<class T>
void Display(T Value, int iSize)
{
    int i =1;

    for(i =1; i<=iSize; i++)
    {
        cout << Value << "\t";
    }
    cout<<"\n";

}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);

    return 0;
}