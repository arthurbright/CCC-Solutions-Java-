#include <iostream>
#include <cmath>
#include <map>

using namespace std;

int charsa[26];
int charsb[26];
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);

    for(char c: a)
    {
        charsa[(int)c  - (int)'A'] += 1;
    }

    for(char c: b)
    {
        charsb[(int)c - (int)'A'] += 1;
    }

    for(int i = 0; i < 26; i ++)
    {
        if(charsa[i] != charsb[i])
        {
            cout << "Is not an anagram.";
            return 0;
        }
    }
    cout << "Is an anagram.";
    return 0;
}
