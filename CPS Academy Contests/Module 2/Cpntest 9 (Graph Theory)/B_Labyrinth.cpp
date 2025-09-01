#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

const int N = 1009;
char g[N][N];
bool vis[N][N];
char par[N][N];
int n, m;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};


void bfs(pair<int, int> src) {
    queue<pair<int, int>> q;
    q.push(src);
    vis[src.first][src.second] = true;

    while(!q.empty()) {
        pair<int, int> u = q.front();
        q.pop();
        for(int i = 0; i < 4; i++) {
            int ni = u.first + dx[i];
            int nj = u.second + dy[i];
            if(ni < 0 or ni >= n or nj < 0 or nj >= m or !vis[ni][nj] or g[ni][nj] == '#') continue;

            vis[ni][nj] = true;
            q.push({ni, nj});
            par[ni][nj] = {u.first, u.second};
        }
    }
}

void solve() {
    cin >> n >> m;
    pair<int, int> src, dest;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> g[i][j];
            if(g[i][j] == 'A') {
                src = {i, j};
            }
            if(g[i][j] == 'B') {
                dest = {i, j};
            }
        }
    }

    bfs(src);
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