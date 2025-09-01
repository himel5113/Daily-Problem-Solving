#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc() ll t;cin>>t;while(t--)

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> V(n);
    for(auto &X : V) cin >> X;
    while(k--) {
        vector<ll> temp(V.begin(), V.end());
        for(ll i=0; i<n-1; i++) {
            if(V[i] > 0) {
                V[i]--; V[n-1]++;
                break;
            }
        }
    }
    for(auto i : V) cout << i << " "; cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    tc() {
        solve();
    }
    return 0;
}