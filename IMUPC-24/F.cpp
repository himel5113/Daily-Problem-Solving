//    Problem F. Beautiful Triangle   ----> IMUPC 24
//               TEAM : MU_Codebenders


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpi;
typedef map<int, int> mp;
typedef set<int> se;
typedef pair<int, int> pr;
#define bug(a) cout << #a << " : " << a << endl;
#define inf INT_MAX
#define pb push_back
#define ppb pop_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(x) x.begin(), x.end()
#define ceiling(a, b) ((a / b) + (a % b != 0))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
 
ll N=1e4+5;
 
ll rec(ll n, ll r)
{
    ll p = 1, q = 1;
 
    if (n - r < r)r = n - r;
    if (r != 0)
    {
        while (r)
        {
            p *= n;
            q *= r;
            ll m = gcd(p, q);
            p /= m;
            q /= m;
            n--;
            r--;
        }
    }
    else
    {
        p = 1;
    }
    return p;
}

void solve(int cs)
{
    ll n;
    cin >> n;
    ll ans = 0;
    vector<ll> V(n);
    vector<ll> h(N, 0);
 
 
    for (auto &x : V)
    {
        cin >> x;
        h[x]++;
    }
 
    sort(all(h), greater<int>());
 
    for (auto &i : h)
    {
 
        if (i < 3)break;
 
        ll ss = rec(i, 3LL);
        ans += ss;
    }
 
    cout << ans << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int tc = 1;
    cin >> tc;
    for (int cs = 1; cs <= tc; cs++)
    {
        solve(cs);
    }
    return 0;
}
 