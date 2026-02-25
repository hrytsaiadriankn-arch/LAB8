#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int FindThirdDot(char* s)
{
    int count = 0;
    char* p = s;

    while ((p = strchr(p, '.')) != NULL)
    {
        count++;
        if (count == 3)
            return (int)(p - s);
        p++;
    }

    return -1;
}

void ReplaceEveryFourth(char* s)
{
    int len = strlen(s);

    for (int i = 3; i < len; i += 4)
        s[i] = '.';
}

int main()
{
    char str[101] = { 0 };

    cout << "Enter string: ";
    cin.getline(str, 100);

    int index = FindThirdDot(str);

    if (index != -1)
        cout << "Index of third dot: " << index << endl;
    else
        cout << "Less than 3 dots in string." << endl;

    ReplaceEveryFourth(str);

    cout << "Modified string: " << str << endl;

    return 0;
}