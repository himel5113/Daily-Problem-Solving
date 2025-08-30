#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpi;
typedef map<int, int> mp;
typedef set<int> se;
typedef pair<int, int> pr;
#define bug(a) cout << #a << " : " << a << endl;
#define inf INT_MAX
#define pb push_back
#define ppb pop_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define all(x) x.begin(), x.end()
#define ceiling(a, b) ((a / b) + (a % b != 0))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
 
const ll MOD= 1e9+7;
 
 
void solve(int cs)
{
    string s;
    cin>>s;
    ll q;
    cin>>q;
    while(q--) {
        string x;
        cin>>x;
 
        ll i = 0, j = 0, count= 0;
        for(ll i=0; i<s.size() && j<x.size();) {
            if(x[j] == s[i]) {
                i++; j++; count++;
            }
            else {
                i++;
            }
        }
        (count==x.size()) ? yes : no;
    }
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int tc = 1;
    //cin >> tc;
    for (int cs = 1; cs <= tc; cs++)
    {
        solve(cs);
    }
    return 0;
}
