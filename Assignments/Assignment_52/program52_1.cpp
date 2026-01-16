#include <iostream>
using namespace std;

template <class T>
class Arithematic
{
public:
    T No1;
    T No2;

    Arithematic(T A, T B)
    {
        No1 = A;
        No2 = B;
    }

    T Multiplication()
    {
        return No1 * No2;
    }
};

int main()
{
    
    Arithematic<int> *iobj = new Arithematic<int>(10, 20);
    cout << "Multiplication : " << iobj->Multiplication() << "\n";
    delete iobj;

    Arithematic<double> *dobj = new Arithematic<double>(5.5, 2.5);
    cout << "Multiplication : " << dobj->Multiplication() << "\n";
    delete dobj;

    return 0;
}
