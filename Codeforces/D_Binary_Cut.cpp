#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double ld;

#define endl '\n'
#define pb push_back
#define ppb pop_back
#define HA cout<<"YES"<<endl
#define NA cout<<"NO"<<endl
#define mem(a, b) memset(a, b, sizeof(a))
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

// void solve() {
//     string s; cin >> s;
//     ll x = unique(all(s)) - s.begin();
//     for(ll i=0; i<x-1; i++) {
//         if(s[i] == '0' && s[i+1] == '1') {
//             x--; break;
//         }
//     }
//     cout << x << endl;
// }

void solve() {
    string s; cin >> s;
    string t;
    for(ll i=0; i<s.size()-1; i++) {
        if(s[i] != s[i+1]) t.pb(s[i]);
    }
    t.pb(s.back());
    // cout << t << endl;
    if(t.size() == 1) {
        cout << 1 << endl; return;
    }
    ll cnt = 0;
    for(ll i=0; i<t.size()-1; i++) {
        if(t[i] == '0' && t[i+1] == '1') {
            cnt = 1; break;
        }
    }
    cout << t.size() - cnt << endl;
}

int32_t main() {
    opt();
    ll t = 1; 
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}