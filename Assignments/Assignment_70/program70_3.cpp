// Input : Hello
// Output : 5

#include <iostream>
using namespace std;

int Strlen(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        Strlen(str + 1);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    cout << "Enter string: ";
    cin >> arr;

    iRet = Strlen(arr);

    cout << "Length is : " << iRet << "\n";

    return 0;
}
