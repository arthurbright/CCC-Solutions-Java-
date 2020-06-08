#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;
    int t = ((a + b + c) - (max(max(a, b), c)) - min(min(a, b), c));
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << t;

    return 0;
}
