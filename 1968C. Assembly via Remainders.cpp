#include <bits/stdc++.h>

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

using namespace std;

void solve() {   //   approach -> 1
    ll n; cin >> n;
    vector<ll> V(n-1), ans(n, 1e9);
    for(auto &x : V) cin >> x;
    for(ll i=n-2; i>=0; i--) {
        ans[i] = ans[i+1] - V[i];
    }
    for(auto i : ans) cout << i << " "; cout << endl;
}

// void solve() {      //   approach -> 2
//     ll n; cin >> n;
//     vector<ll> V(n-1), ans;
//     for(auto &x : V) cin >> x;
//     ll x = 501; ans.pb(x);
//     for(ll i=0; i<n-1; i++) {
//         x += V[i]; ans.pb(x);
//     }
//     for(auto i : ans) cout << i << " "; cout << endl;
// }

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}
