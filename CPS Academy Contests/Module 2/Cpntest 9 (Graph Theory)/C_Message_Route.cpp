#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

const int N = 2e5 + 5;
vector<int> g[N];
bool vis[N];
int n, m;
int dist[N];
int par[N];

void init() {
    for(int i = 0; i < N; i++) {
        g[i].clear();
        vis[i] = false;
        dist[i] = -1;
        par[i] = -1;
    }
}

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    dist[src] = 0;
    while(!q.empty()) {
        int u = q.front(); q.pop();
        for(auto v : g[u]) {
            if(!vis[v]) {
                vis[v] = true;
                q.push(v);
                dist[v] = dist[u] + 1;
                par[v] = u;
            }
        }
    }
}

void solve() {
    cin >> n >> m;
    init();
    for(int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> path;

    bfs(1);
    int t = n;

    if(!vis[n]) {
        cout << "IMPOSSIBLE\n";
        return;
    }

    while(1) {
        path.push_back(t);
        if(t == 1) break;
        t = par[t];
    }
    cout << path.size() << '\n';
    reverse(path.begin(), path.end());
    for(auto i : path) cout << i << ' '; cout << '\n';
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