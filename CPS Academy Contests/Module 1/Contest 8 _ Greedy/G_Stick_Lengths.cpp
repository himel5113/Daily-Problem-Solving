#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc() ll t;cin>>t;while(t--)

void solve() {
    ll n; cin >> n;
    vector<ll> V(n);
    map<ll, ll> mp;
    for(auto &x : V) cin >> x;
    sort(V.begin(), V.end());
    ll t = V[n/2];
    ll ans = 0;
    for(auto i : V) ans += abs(t - i);
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // tc() {
        solve();
    // }
    return 0;
}