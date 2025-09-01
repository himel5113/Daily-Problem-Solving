#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

const int N = 2e5 + 9;
vector<int> tree[N];
bool vis[N];
int level[N];

void bfs(int st) {
    queue<int> q;
    q.push(st);
    level[st] = 1;
    vis[st] = true;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(auto v : tree[u]) {
            if(!vis[v]) {
                vis[v] = true;
                q.push(v);
                level[v] = level[u] + 1;
            }
        }
    }
}

void init() {
    for(int i = 0; i < N; i++) {
        tree[i].clear();
        vis[i] = false;
        level[i] = -1;
    }
}

void solve() {
    int n; cin >> n;
    init();
    for(int i = 0; i < n - 1; i++) {
        int u, v; cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    // bfs(1);
    int diameter = INT_MIN;
    for(int i = 1; i <= n; i++) {
        bfs(i);
        for(int i = )
    }
    cout << diameter << '\n';
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