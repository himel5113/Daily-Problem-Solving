#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
const int inf = INT_MAX;
const int N = 2e5+5;
int n;
int arr[N];
int dp[N];

int rec(int i) {
    if(i == n) return 0;
    if(i > n) return inf;
    if(dp[i] != -1) return dp[i];
    int move1 = rec(i + 1) + 1;
    int move2 = rec(i + (arr[i] + 1));
    return dp[i] = min(move1, move2);
}

void solve() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << rec(0) << '\n';
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