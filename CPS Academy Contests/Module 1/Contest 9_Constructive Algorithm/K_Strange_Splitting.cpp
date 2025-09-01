#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc() ll t;cin>>t;while(t--)

void solve() {
    ll n; cin >> n;
    vector<ll> V(n);
    for(auto &x : V) cin >> x;
    set<ll> st(V.begin(), V.end());
    if(st.size() == 1) {
        cout << "NO\n"; return;
    }
    cout << "YES\n";
    if(st.size() == n) {
        for(ll i=0; i<n; i++) {
            if(i == 0) cout << 'R';
            else cout << 'B';
        } cout << endl;
    }
    else {
        ll t = -1;
        for(ll i=0; i<n-1; i++) {
            if(V[i] == V[i+1]) {
                t = i; break;
            }
        }
        for(ll i=0; i<n; i++) {
            if(i == t) cout << 'R';
            else cout << 'B';
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