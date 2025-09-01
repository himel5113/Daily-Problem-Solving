#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
const int N = 1009;
int n, m;
int cs = 1;
int cnt;
char g[N][N];
bool vis[N][N];

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

void dfs(int i, int j) {
    vis[i][j] = true;
    for(int k = 0; k < 4; k++) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        if(ni < 0 or nj < 0 or ni >= n or nj >= m or g[ni][nj] == '#' or vis[ni][nj]) continue;
        dfs(ni, nj);
    }
}

void init() {
    for(int i= 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            vis[i][j] = false;
            g[i][j] = '.';
        }
    }
}


void solve() {
    cin >> n >> m;
    init();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> g[i][j];
        }
    }
    cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(g[i][j] == '.' and !vis[i][j]) {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout << cnt << '\n';
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