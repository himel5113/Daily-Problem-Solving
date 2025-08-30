
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a, b, c, x, y;
    cin >> a >> b >> c;
    while (1)
    {
        if (a * 2 <= b && a * 4 <= c)
        {
            b = a * 2;
            c = a * 4;
            cout << a + a * 2 + a * 4;
            break;
        }
        a--;
    }

    return 0;
}
