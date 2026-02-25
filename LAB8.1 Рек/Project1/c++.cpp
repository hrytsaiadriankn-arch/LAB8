#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int FindThirdDotRec(const char* s, int index, int count)
{
    if (s[index] == '\0')
        return -1;

    if (s[index] == '.')
        count++;

    if (count == 3)
        return index;

    return FindThirdDotRec(s, index + 1, count);
}

void ReplaceEveryFourthRec(char* s, int index)
{
    if (s[index] == '\0')
        return;

    if ((index + 1) % 4 == 0)
        s[index] = '.';

    ReplaceEveryFourthRec(s, index + 1);
}

int main()
{
    char str[101] = { 0 };

    cout << "Enter string: ";
    cin.getline(str, 100);

    int index = FindThirdDotRec(str, 0, 0);

    if (index != -1)
        cout << "Index of third dot: " << index << endl;
    else
        cout << "Less than 3 dots in string." << endl;

    ReplaceEveryFourthRec(str, 0);

    cout << "Modified string: " << str << endl;

    return 0;
}