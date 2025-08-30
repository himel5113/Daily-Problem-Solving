#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n;
    cin >> n;
    // int V[] = {6, 9, 66, 69, 96, 99};
    vector<int> v;
    v.push_back(6);
    v.push_back(9);
    v.push_back(66);
    v.push_back(69);
    v.push_back(96);
    v.push_back(99);
    int ans = INT_MAX;
    for (int i = 0; i < 6; i++)
    {
        if (v[i] == n)
        {
            cout << v[i] << endl;
            return;
        }
        if (v[i] > n)
        {
            cout << n+(v[i]-n) << endl;
            return;
        }

    }

}

int main()
{
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }

    return 0;
}