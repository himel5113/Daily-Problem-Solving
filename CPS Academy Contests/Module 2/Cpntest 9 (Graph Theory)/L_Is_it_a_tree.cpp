#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
const int N = 2e5 + 9;
vector<int> g[N];
bool vis[N];

void dfs(int st) {
    vis[st] = true;
    for(auto u : g[st]) {
        if(!vis[u]) {
            dfs(u);
        }
    }
}

void init() {
    for(int i = 0; i < N; i++) {
        g[i].clear();
        vis[i] = false;
    }
}

void solve() {
    int n, m; cin >> n >> m;
    init();
    for(int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            cnt++;
            dfs(i);
        }
    }
    cout << ((cnt == 1 and m == n - 1) ? "YES" : "NO") << '\n'; 
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}