#include <iostream>
#include <string>
using namespace std;

int FindThirdDot(const string& s)
{
    size_t pos = 0;
    int count = 0;

    while ((pos = s.find('.', pos)) != string::npos)
    {
        count++;
        if (count == 3)
            return (int)pos;

        pos++;
    }

    return -1;
}

void ReplaceEveryFourth(string& s)
{
    for (size_t i = 3; i < s.length(); i += 4)
        s[i] = '.';
}

int main()
{
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    int index = FindThirdDot(str);

    if (index != -1)
        cout << "Index of third dot: " << index << endl;
    else
        cout << "Less than 3 dots in string." << endl;

    ReplaceEveryFourth(str);

    cout << "Modified string: " << str << endl;

    return 0;
}