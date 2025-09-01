#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc() ll t;cin>>t;while(t--)

void solve() {
    ll n; cin >> n;
    string s = "";
    for(ll i=0; i<2e5; i++) {
        s += "aabb";
    }
    cout << s.substr(0, n) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // tc() {
        solve();
    // }
    return 0;
}