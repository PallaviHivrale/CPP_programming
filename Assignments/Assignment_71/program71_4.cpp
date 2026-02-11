// accept string from user & return smallest digit
// Input :   87983
// Output :  3

#include <iostream>
using namespace std;

int Min(int iNo)
{
    int iDigit = 0;
    int iRet = 0;

    // Base condition
    if(iNo == 0)
    {
        return 9;
    }

    iDigit = iNo % 10;

    iRet = Min(iNo / 10);

    if(iDigit < iRet)
    {
        return iDigit;
    }
    else
    {
        return iRet;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number :";
    cin>>iValue;

    iRet = Min(iValue);

    cout<<"smallests digit is :"<<iRet<<"\n";

    return 0;
}
