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
    map<ll, ll> mp;
    vector<ll> V(n), temp;
    set<ll> st;
    for(auto &x : V) cin >> x, mp[x]++, st.insert(x);
    for(auto [x, y] : mp) temp.pb(y);
    sort(all(temp));
    ll ans = 0;

    if(st.size() == 1) {
        if(n == 1) cout << 2 << endl;
        else cout << 1 << endl;

        return;
    }
    if(st.size() == n) {
        cout << ceiling(n, 2) * 2 << endl; return;
    }
    ll c = 0;
    for(ll i=0; i<temp.size(); i++) {
        if(temp[i] == 1) ans ++;
        else c++;
    }
    cout << c + ceiling(ans, 2)*2 << endl;
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