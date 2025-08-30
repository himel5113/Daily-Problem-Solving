#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
const int N = 2e5 + 9;
int n;
int arr[N];
int dp[N];

ll rec(int i) {
    if(i > n - 1) return 0;
    if(dp[i] != -1) return dp[i];

    return dp[i] = rec(i + arr[i]) + arr[i];
}

void solve() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<ll> t;
    memset(dp, -1, sizeof(dp));
    for(int i = 0; i < n; i++) {
        ll ans = rec(i);
        t.push_back(ans);
    }
    cout << *max_element(t.begin(), t.end()) << '\n';
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