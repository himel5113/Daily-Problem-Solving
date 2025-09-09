#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; string s;
    cin >> n >> s;
    string k = s;
    sort(k.begin(), k.end());
    if(is_sorted(s.begin(), s.end())) {
        cout << "0\n";
        return;
    }
    int cnt0 = count(s.begin(), s.end(), '0'), cnt = 0;
    for(int i = cnt0; i < n; i++) {
        // bug(s[i]);
        cnt += (s[i] != k[i]);
    }
    cout << cnt << '\n';
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