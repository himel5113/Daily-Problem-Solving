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

void solve() {
    ll n; cin >> n;
    vector<ll> V(n);
    set<ll> st;
    for(auto &x : V) cin >> x, st.insert(x);
    sort(all(V));
    if(st.size() == 1 && *st.begin() == 1) {
        HA; return;
    }
    if(V[0] != 1) {
        NA; return;
    }
    vector<ll> pre(n, 0);
    pre[0] = V[0];
    for(ll i=1; i<n; i++) {
        pre[i] = (pre[i-1] + V[i]);
    }
    pre.pop_back();
    bool f = true;
    for(ll i=1; i<n; i++) {
        if(pre[i-1] < V[i]) {
            f = false; break;
        }
    }
    (f) ? HA : NA;
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