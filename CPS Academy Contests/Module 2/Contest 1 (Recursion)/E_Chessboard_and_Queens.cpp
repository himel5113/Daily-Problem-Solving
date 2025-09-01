#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
const int N = 25;
char arr[8][8];
int cnt;
bool vis_col[N], vis_left[N], vis_right[N];

void rec(int r) {
    if(r == 8) {
        cnt++;
        return;
    }

    for(int c = 0; c < 8; c++) {
        if(arr[r][c] != '*' and !vis_col[c] and !vis_left[r - c + 7] and !vis_right[r + c]) {
            vis_col[c] = vis_left[r - c + 7] = vis_right[r + c] = true;
            rec(r + 1);
            vis_col[c] = vis_left[r - c + 7] = vis_right[r + c] = false;
        }
    }
}

void solve() {
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> arr[i][j];
        }
    }
    cnt = 0;
    rec(0);
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