#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    string a, b; cin >> a >> b;
    int cnt = 0, cnt2 = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == '1' and b[i] == '1') {
            cnt++;
        }
        else if((a[i] == '0' and b[i] == '1') or (a[i] == '1' and b[i] == '0')) {
            cnt2++;
        }
    }
    // bug(cnt);
    // bug(cnt2);
    if(cnt & 1) {
        cout << "YES\n"; 
    }
    else if(cnt == 0 and cnt2 == 0) {
        cout << "NO\n";
    }
    else if(cnt % 2 == 0 and cnt2 >= 1) {
        cout << "YES\n"; 
    }
    else {
        cout << "NO\n";
    }
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