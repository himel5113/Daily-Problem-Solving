#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (n % 2 == 0)
    {
        cout << s[0] << s[1];
        for (ll i = 2; i < n - 1; i += 2)
        {
            cout << "-" << s[i] << s[i + 1];
        }
    }
    else
    {
        cout << s[0] << s[1] << s[2];
        for (ll i = 3; i < n - 1; i += 2)
        {
            cout << "-" << s[i] << s[i + 1];
        }
    }
}

int main()
{
    opt();

    solve();

    return 0;
}
