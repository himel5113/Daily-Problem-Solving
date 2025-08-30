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

set<ll> st;

void divisors(ll n) {
    st.clear();
    for(ll i=1; i*i<=n; i++) {
        if(n%i==0) {
            st.insert(i);
            st.insert(n/i);
        }
    }
}

void solve() {
    ll k; cin >> k;
    vector<ll> V(k);
    for(auto &x : V) cin >> x;
    divisors(k-2);
    vector<ll> t(all(st));
    ll l = 0, r = t.size() - 1;
    while(l <= r) {
        ll x = t[l], y = t[r];
        if((find(all(V), x) != V.end()) && (find(all(V), y) != V.end())) {
            cout << x << " " << y << endl; return;
        }
        l++; r--;
    }
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