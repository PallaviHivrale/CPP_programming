// accept string from user & count white spaces
// Input :   HE LLO WOr lD
// Output :  3

#include <iostream>
using namespace std;

int WhiteSpace(char * str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }

        WhiteSpace(str + 1);
    }

    return iCnt;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    cout << "Enter string: ";
    cin.get(Arr,100);

    iRet = WhiteSpace(Arr);

    cout << "white spaces are : " << iRet << "\n";

    return 0;
}
