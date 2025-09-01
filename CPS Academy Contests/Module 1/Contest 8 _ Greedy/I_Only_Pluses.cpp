#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc() ll t;cin>>t;while(t--)

void solve() {
    ll a, b, c; cin >> a >> b >> c;
    vector<ll> V = {a, b, c}; ll x = 5;
    while(x--) {
        sort(V.begin(), V.end()); V[0]++;
    }
    cout << V[0]*V[1]*V[2] << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    tc() {
        solve();
    }
    return 0;
}