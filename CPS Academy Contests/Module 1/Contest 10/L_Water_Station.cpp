#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    ll n; cin >> n;
    if(n%5 == 0) {
        cout << n << endl; return;
    }
    ll t = n%5;
    if(t == 1 || t == 2) {
        cout << n-t << endl;
    }
    else cout << (n+(5-t)) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}