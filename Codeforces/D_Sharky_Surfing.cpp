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
    ll n, m, L; cin >> n >> m >> L;
    vector<pair<ll, ll>> obs(n), hurdles(m);
    for(ll i=0; i<n; i++) {
        cin >> obs[i].first >> obs[i].second;
    }

    for(ll i=0; i<m; i++) {
        cin >> hurdles[i].first >> hurdles[i].second;
    }

    priority_queue<ll> pq;
    ll cnt = 0, j = 0, power = 1;
    for(ll i=0; i<n; i++) {
        while(j < m) {
            if(hurdles[j].first < obs[i].first) pq.push(hurdles[j++].second);
            else break;
        }
        ll target = obs[i].second-obs[i].first+2;
        while(!pq.empty() && power < target) {
            power += pq.top(); pq.pop(); cnt++;
        }
        if(target > power) {
            cout << "-1\n"; return;
        }
    }
    cout << cnt << endl;
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