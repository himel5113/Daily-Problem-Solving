#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
const int N = 109;
const int M = 1e7 + 5;
int dp[M];
int n, target;
int arr[N];

int rec(int x) {
    if(x == 0) return 1;
    if(x < 0) return 0;
    int ways = 0;
    if(dp[x] != -1) return dp[x];

    for(int i = 0; i < n; i++) {
        ways = ((ways % MOD)  + (rec(x - arr[i]) % MOD)) % MOD;
    }

    return dp[x] = ways;
}

void solve() {
    cin >> n >> target;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << rec(target) << '\n';
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