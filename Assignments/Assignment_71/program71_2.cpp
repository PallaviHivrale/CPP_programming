// accept string from user & return largest digit
// Input :   87983
// Output :  9

#include <iostream>
using namespace std;

int Max(int iNo)
{
    int iDigit = 0;
    static int iMax = 0;

    if(iNo == 0)
    {
        return iMax;
    }

    iDigit = iNo % 10;

    if(iDigit > iMax)
    {
        iMax = iDigit;
    }

    Max(iNo / 10);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number :";
    cin>>iValue;

    iRet = Max(iValue);

    cout<<"Larges digit is :"<<iRet<<"\n";

    return 0;
}
