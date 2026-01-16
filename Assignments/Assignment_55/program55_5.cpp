////////////////////////////////////////////////////////////////////
//  to write generic program to find maximum of four values
////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T Max(T a, T b, T c, T d)
{
    T max = a;

    if(b > max)
    {
        max = b;
    }
    
    if(c > max)
    {
        max = c;
    }

    if(d > max)
    {
        max = d;
    }
       
    return max;
}

int main()
{
    cout << Max(10, 20, 5, 15) << "\n";
    cout << Max(3.5f, 7.8f, 2.1f, 6.4f) << "\n";

    return 0;
}
