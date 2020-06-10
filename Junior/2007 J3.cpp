#include <iostream>
#include <cmath>
#include <map>

using namespace std;


int main()
{
    int n;
    cin >> n;

    int t;
    map<int, int> mapp;
    mapp[1] = 100;
    mapp[2] = 500;
    mapp[3] = 1000;
    mapp[4] = 5000;
    mapp[5] = 10000;
    mapp[6] = 25000;
    mapp[7] = 50000;
    mapp[8] = 100000;
    mapp[9] = 500000;
    mapp[10] = 1000000;

    int acc = 100 + 500 + 1000 + 5000 + 10000 + 25000 + 50000 + 100000 + 500000 + 1000000;
    for(int i = 0; i < n; i ++)
    {
        cin >> t;
        acc -= mapp[t];
    }


    int m;
    cin >> m;
    double kk = (double) acc / (10 - n);

    if(m > kk)
    {
        cout << "deal";
    }
    else
    {
        cout << "no deal";
    }
}
