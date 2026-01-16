////////////////////////////////////////////////////////////////////
//  to write generic program to swap of two values
////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
void Swap(T &no1, T &no2)
{
    T temp;
    temp = no1;
    no1 = no2;
    no2 = temp;
}

int main()
{
    int a = 10, b = 20;
    cout << "Before swap: a = " << a << " b = " << b << "\n";
    Swap(a, b);
    cout << "After swap:  a = " << a << " b = " << b << "\n";

    float x = 3.5f, y = 7.8f;
    cout << "Before swap: x = " << x << " y = " << y << "\n";
    Swap(x, y);
    cout << "After swap:  x = " << x << " y = " << y << "\n";

    return 0;
}
