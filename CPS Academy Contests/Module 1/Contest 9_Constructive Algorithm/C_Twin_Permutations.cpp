#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc() ll t;cin>>t;while(t--)

void solve() {
    ll n; cin >> n;
    vector<ll> V(n);
    for(auto &x : V) cin >>  x;
    if(is_sorted(V.begin(), V.end())) {
        for(auto i : V) cout << i << " "; cout << endl;
    }
    else {
        for(ll i=0; i<n; i++) {
            cout << n-V[i]+1 << " ";
        } cout << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    tc() {
        solve();
    }
    return 0;
}