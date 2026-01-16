////////////////////////////////////////////////////////////////////
//  to write generic program to perform subtraction of two numbers
////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T Sub(T no1, T no2)
{
    return no1 - no2;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0;

    iRet = Sub(10, 20);
    cout << iRet <<"\n";

    fRet = Sub(10.5f, 20.3f);
    cout << fRet <<"\n";

    return 0;
}
