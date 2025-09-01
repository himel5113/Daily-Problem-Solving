#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc() ll t;cin>>t;while(t--)

void solve() {
    ll n; cin >> n;
    vector<ll> V(n);
    ll sum = 0;
    for(auto &x : V) cin >> x, sum += abs(x);
    cout << sum << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // tc() {
        solve();
    // }
    return 0;
}