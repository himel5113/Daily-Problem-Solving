#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
int n, m;
int cs = 1;
int cnt;
char g[30][30];
bool vis[30][30];

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

void dfs(int i, int j) {
    if(i < 0 or j < 0 or i >= n or j >= m or g[i][j] == '#' or vis[i][j]) {
        return;
    }
    cnt++;
    vis[i][j] = true;
    for(int k = 0; k < 4; k++) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        dfs(ni, nj);
    }
}

void clear() {
    for(int i= 0; i < 30; i++) {
        for(int j = 0; j < 30; j++) {
            vis[i][j] = false;
            g[i][j] = '.';
        }
    }
}


void solve() {
    cin >> m >> n;
    int x = -1, y = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> g[i][j];
            if(g[i][j] == '@') {
                x = i; y = j;
            }
        }
    }
    cnt = 0;
    dfs(x, y);
    cout << "Case " << cs++ << ": " << cnt << '\n';
    clear();
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