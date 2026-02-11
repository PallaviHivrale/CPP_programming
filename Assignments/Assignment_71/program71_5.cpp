// accept string from user & return its reverse number
// Input :  Input: 523
// Output: 325
// Prototype: int Reverse(int iNo)

#include<iostream>
using namespace std;

int Reverse(int iNo)
{
    static int iRev = 0;
    int iDigit = 0;

    if(iNo == 0)
    {
        return iRev;
    }

    iDigit = iNo % 10;
    iRev = (iRev * 10) + iDigit;

    return Reverse(iNo / 10);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    if(iValue < 0)
    {
        iValue = -iValue;
    }

    iRet = Reverse(iValue);

    cout<<"Reverse number is : "<<iRet<<"\n";

    return 0;
}
