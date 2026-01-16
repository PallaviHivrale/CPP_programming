#include <iostream>
using namespace std;

template <class T>
T Maximum(T a, T b, T c)
{
    if((a>=b) &&(a>=c))
    {
        return a;
    }
    else if((b>=a) && (b>=c))
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{

    cout << "Largest (int): " << Maximum(10, 20, 15) << "\n";
    cout << "Largest (float): " << Maximum(10.5f, 3.2f, 8.1f) << "\n";
    cout << "Largest (double): " << Maximum(9.8, 12.3, 7.6) <<"\n";
    cout << "Largest (char): " << Maximum('A', 'Z', 'M') << "\n";

    return 0;
}
