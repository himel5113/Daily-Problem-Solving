#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> A(n), B(n);
    for(auto &x : A) cin >> x;
    for(auto &x : B) cin >> x;

    int sum = 0;
    for(int i = 0; i < n-1; i++) {
        int x = A[i] - B[i+1];
        sum += max(x, 0);
    }
    cout << sum + A[n-1] << '\n';
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