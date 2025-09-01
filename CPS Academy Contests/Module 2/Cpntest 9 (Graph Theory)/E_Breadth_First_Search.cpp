#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
const int N = 109;
vector<int> g[N];
bool vis[N];
int level[N];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    level[src] = 0;
    vis[src] = true;

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(auto v : g[u]) {
            if(!vis[v]) {
                vis[v] = true;
                q.push(v);
                level[v] = level[u] + 1;
            }
        }
    }
}

void clear() {
    for(int i = 0; i < N; i++) {
        g[i].clear();
        vis[i] = false;
        level[i] = -1;
    }
}

void solve() {
    int n; cin >> n;
    clear();
    for(int i = 0; i < n; i++) {
        int u, k; cin >> u >> k;
        for(int j = 0; j < k; j++) {
            int v; cin >> v;
            g[u].push_back(v);
        }
    }

    bfs(1);
    for(int i = 1; i <= n; i++) {
        cout  << i << ' ' << level[i] << '\n';
    }
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