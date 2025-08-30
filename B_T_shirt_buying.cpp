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

struct shirt {
    ll p, a, b;
};

void solve() {
    ll n; cin >> n;
    vector<shirt> V(n+1);
    for(ll i=1; i<=n; i++) {
        cin >> V[i].p;
    }
    for(ll i=1; i<=n; i++) {
        cin >> V[i].a;
    }
    for(ll i=1; i<=n; i++) {
        cin >> V[i].b;
    }

    sort(all(V), [](shirt x, shirt y) {
        return x.p < y.p;
    });

    // for(ll i=1; i<=n; i++) {
    //     cout << V[i].p << " " << V[i].a << " " << V[i].b << endl;
    // }

    set<ll> st[4];
    for(ll i=1; i<=n; i++) {
        st[V[i].a].insert(i);
        st[V[i].b].insert(i);
    }
    vector<bool> vis(n+1, false);
    ll m; cin >> m;
    while(m--) {
        ll ans = -1;
        ll x; cin >> x;
        while(!st[x].empty()) {
            auto it = st[x].begin();
            ll i = *it;
            st[x].erase(it);

            if(!vis[i]) {
                ans = V[i].p;
                vis[i] = true;
                break;
            }
        }
        cout << ans << " ";
    }
    cout << endl;
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