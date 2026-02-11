// Input :   523
// Output :  30

#include <iostream>
using namespace std;

int Mult(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }  

    int iDigit = iNo % 10;
    return iDigit * Mult(iNo / 10);
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter number: ";
    cin >> iValue;

    iRet = Mult(iValue);

    cout << "product of the digit is : " << iRet << "\n";

    return 0;
}
