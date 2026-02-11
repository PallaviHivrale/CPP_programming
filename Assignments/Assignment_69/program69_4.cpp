// Input : 6
// Output : A   B   C   D   E   F
#include<iostream>
using namespace std;

void Display(int iNo)
{
    static char ch = 'A';

    if(iNo <= 0)
    {
        return;
    }

    cout << ch << "\t";
    ch++;
    Display(iNo - 1);
}

int main()
{
    int iValue = 0;

    cout << "Enter number: ";
    cin >> iValue;

    Display(iValue);

    return 0;
}
