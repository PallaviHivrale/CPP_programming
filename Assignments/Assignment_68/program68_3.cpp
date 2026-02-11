// 5    4   3   2   1

#include<iostream>
using namespace std;

void Display()
{
    static int iNo = 5;

    if(iNo >= 1)
    {
        cout << iNo << "\t";
        iNo--;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}
