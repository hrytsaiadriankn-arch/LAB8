#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int FindThirdDot(const char* s)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '.')
        {
            count++;
            if (count == 3)
                return i;
        }
    }
    return -1;
}

void ReplaceEveryFourth(char* s)
{
    int i = 3;
    while (s[i] != '\0')
    {
        s[i] = '.';
        i += 4;
    }
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