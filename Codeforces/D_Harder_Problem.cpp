#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> V(n), ans;
    for(auto &X : V) cin >> X;
    vector<bool> vis(n + 1, false);
    for(int i = 0; i < n; i++) {
        if(!vis[V[i]]) {
            ans.push_back(V[i]);
            vis[V[i]] = true;
        }
    }
    
    for(int i = 1; i <= n; i++) {
        // cout << vis[i] << ' ';
        if(!vis[i]) {
            ans.push_back(i);
            vis[i] = true;
        }
    }
    for(auto i : ans) cout << i << ' '; 
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}