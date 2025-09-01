#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc() ll t;cin>>t;while(t--)

void solve() {
    ll n, k; cin >> n >> k;
    if(n == k) {
        for(ll i=0; i<n; i++) cout << 1 << " "; cout << endl; 
    }
    
    else if(k == 1) {
        for(ll i=1; i<=n; i++) cout << i << " "; cout << endl;
    }

    else cout << -1 << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    tc() {
        solve();
    }
    return 0;
}