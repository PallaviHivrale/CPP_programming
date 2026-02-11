// Input :   5
// Output : 1*2*3*4*5 = 120

#include <iostream>
using namespace std;

int Fact(int iNo)
{
    if(iNo == 0 || iNo == 1)
    {
        return 1;
    }  

    return iNo * Fact(iNo - 1);
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter number: ";
    cin >> iValue;

    iRet = Fact(iValue);

    cout << "Factorial is : " << iRet << "\n";

    return 0;
}
