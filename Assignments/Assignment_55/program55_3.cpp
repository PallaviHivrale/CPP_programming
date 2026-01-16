////////////////////////////////////////////////////////////////////
//  to write generic program to perform division of two numbers
////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T Div(T no1, T no2)
{
    if(no2 == 0)
    {
        cout << "Division by zero not allowed\n";
        return 0;
    }
    return no1 / no2;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0;

    iRet = Div(10, 20);
    cout << iRet <<"\n";

    fRet = Div(10.5f, 20.3f);
    cout << fRet <<"\n";

    return 0;
}
