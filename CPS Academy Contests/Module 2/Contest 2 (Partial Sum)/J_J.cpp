#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n, k; cin >> n >> k;
    vector<ll> V(n);
    for(auto &X : V) cin >> X;
    map<ll, ll> mp;
    mp[0] = 1;
    ll sum = 0;
    ll cnt = 0;
    for(int i = 0; i < n; i++) {
        sum += V[i];
        ll x = sum - k;
        cnt += mp[x];
        mp[sum]++;
    }
    cout << cnt << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}