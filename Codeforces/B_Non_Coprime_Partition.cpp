#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double ld;

#define endl '\n'
#define pb push_back
#define ppb pop_back
#define HA cout<<"Yes"<<endl
#define NA cout<<"No"<<endl
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
//     ll n; cin >> n;
//     if(n <= 2) {
//         NA; return;
//     }
//     HA;
//     cout << 1 << " " << (n+1)/2 << endl;
//     cout << n-1 << " 1 ";
//     for(ll i=2; i<=n; i++) {
//         if(i!=(n+1)/2) cout << i << " ";
//     } cout << endl;
// }

void solve() {
    ll n; cin >> n;
    if(n <= 2) {
        NA; return;
    } HA;
    cout << (n+1)/2 << " ";
    for(ll i=1; i<=n; i+=2) cout << i << " "; cout << endl;

    cout << n/2 << " ";
    for(ll i=2; i<=n; i+=2) cout << i << " "; cout << endl;
}

int32_t main() {
    opt();
    ll t = 1; 
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}