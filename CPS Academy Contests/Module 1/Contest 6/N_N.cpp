#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double ld;

#define endl '\n'
#define fi first
#define se second 
#define pb push_back
#define ppb pop_back
#define HA cout<<"YES"<<endl
#define NA cout<<"NO"<<endl
#define mem(a, b) memset(a, b, sizeof(a))
#define tc() ll t;cin>>t;while(t--)
#define all(V) (V).begin(), (V).end()
#define bug(a) cout << #a << " : " << a << endl;
#define sumV(a) accumulate(a.begin(), a.end(), 0LL)
#define mxV(V) *max_element(V.begin(), V.end())
#define mnV(V) *min_element(V.begin(), V.end())
#define mx(a, b, c) max(a, max(b, c))
#define mn(a, b, c) min(a, min(b, c))
#define ceiling(a, b) ((a / b) + (a % b != 0))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int MAX_SIZE = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;
const ld EPS = LLONG_MIN;

void solve() {
    ll n; cin >> n; string s; cin >> s;
    map<char, ll> mp;
    for(auto c : s) mp[c]++;
    vector<ll> V;
    for(auto [x, y] : mp) V.pb(y);
    sort(all(V));
    if(V[0] == V[1]) {
        char ch = s.back();
        if(ch == 'T') cout << 'A';
        else cout << 'T';
    }
    else {
        ll maxii = V.back();
        if(mp['T'] == maxii) cout << 'T';
        else cout << 'A';
    }
}

int main() {
    opt();
    // tc() {
        solve();
    // }
    return 0;
}