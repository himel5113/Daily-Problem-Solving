#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

void solve() {
    int n, k; cin >> n >> k;
    if(k == 1) {
        for(int i=1; i<=n; i++) {
            cout << i << " ";
        } cout << '\n';
        return;
    }
    vector<int> ans(n, 0);
    int cnt = 1;
    for(int i=k-1; i<n; i+=k) {
        ans[i] = cnt++;
    }

    for(int i=0; i<n; i++) {
        if(!ans[i]) ans[i] = cnt++;
    }

    for(auto i : ans) cout << i << " "; cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}