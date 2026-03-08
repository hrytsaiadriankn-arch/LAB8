#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string CapitalAfterDot(string s)
{
    bool afterDot = false;
    bool inWord = false;

    for (int i = 0; i < s.length(); i++) {

        if (s[i] == '.') {
            afterDot = true;
            inWord = false;
            continue;
        }

        if (isalpha(s[i])) {

            if (!inWord && afterDot) {
                s[i] = toupper(s[i]);
                afterDot = false;
            }

            inWord = true;
        }
        else {
            if (s[i] == ' ')
                inWord = false;
        }
    }

    return s;
}

int main() {
    string s;

    cout << "Enter text:\n";
    getline(cin, s);

    s = CapitalAfterDot(s);

    cout << "\nResult:\n";
    cout << s << endl;

    return 0;
}