// accept string from user & count white no. of small character
// Input :   HEllo WOrlD
// Output :  5

#include <iostream>
using namespace std;

int Small(char * str)
{
    int iCnt = 0;

    if(*str== '\0')
    {
        return 0;
    }

    if(*str >= 'a' && *str <= 'z')
    {
        iCnt = 1;
    }

    return iCnt + Small(str + 1);
}

int main()
{
    char Arr[100];
    int iRet = 0;

    cout << "Enter string: ";
    cin.get(Arr,100);

    iRet = Small(Arr);

    cout << "small character count is : " << iRet << "\n";

    return 0;
}
