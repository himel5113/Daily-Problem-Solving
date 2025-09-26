#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

int findMex(vector<int> &V) {
    int n = V.size();
    vector<bool> vis(n + 1, false);
    for(int i = 0; i < n; i++) {
        if(V[i] >= 0 and V[i] <= n) vis[V[i]] = true;
    }

    for(int i = 0; i <= n; i++) {
        if(!vis[i]) return i;
    }
    return n + 1;
}

void solve() {
    int n, k; cin >> n >> k;
    vector<int> V(n);
    for(auto &x : V) cin >> x;

    int mex = findMex(V);
    if(mex == k) {
        cout << "0\n";
        return;
    }
    
    map<int, int> mp;
    for(auto x : V) mp[x]++;
    int cnt = 0;
    for(int i = 0; i < k; i++) {
        cnt += (mp.find(i) == mp.end());
    }
    // bug(cnt); bug(mp[k]);
    cout << max(cnt, mp[k]) << '\n';
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