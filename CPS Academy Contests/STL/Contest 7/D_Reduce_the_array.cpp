#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        ll x; cin >> x;
        pq.push(x);
    }
    ll sum = 0;
    while(pq.size() > 1) {
        ll a = pq.top(); pq.pop();
        ll b = pq.top(); pq.pop();
        sum += (a + b);
        pq.push(a + b);
    }
    cout << sum << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}