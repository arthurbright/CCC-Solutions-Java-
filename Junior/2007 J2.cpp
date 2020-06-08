#include <iostream>
#include <cmath>
#include <map>

using namespace std;

int main()
{
    map<string, string> m;
    m.insert(pair<string, string>("CU", "see you"));
    m.insert(pair<string, string>(":-)", "I'm happy"));
    m.insert(pair<string, string>(":-(", "I'm unhappy"));
    m.insert(pair<string, string>(";-)", "wink"));
    m.insert(pair<string, string>(":-P", "stick out my tongue"));
    m.insert(pair<string, string>("(~.~)", "sleepy"));
    m.insert(pair<string, string>("TA", "totally awesome"));
    m.insert(pair<string, string>("CCC", "Canadian Computing Competition"));
    m.insert(pair<string, string>("CUZ", "because"));
    m.insert(pair<string, string>("TY", "thank-you"));
    m.insert(pair<string, string>("YW", "you're welcome"));
    m.insert(pair<string, string>("TTYL", "talk to you later"));



    string str;
    while(true)
    {
        getline(cin, str);
        if(m.count(str) > 0)
        {
            cout << m[str] << endl;
        }
        else
        {
            cout<< str << endl;
        }
        if(str == "TTYL")
        {
            break;
        }

    }


    return 0;
}
