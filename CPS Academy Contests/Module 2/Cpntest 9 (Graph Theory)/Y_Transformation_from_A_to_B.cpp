#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
vector<int> ans;

bool rec(int a, int b) {
    ans.push_back(b);
    if(a > b) return false;
    if(a == b) return true;
    if(b % 2 == 0) {
        b /= 2;
    }
    else if(b % 10 == 1){
        b /= 10;
    }
    else return false;
    return rec(a, b);
}

void solve() {
    int a, b; cin >> a >> b;
    ans.clear();
    bool ok = rec(a, b);
    if(!ok) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << ans.size() << '\n';
    reverse(ans.begin(), ans.end());
    for(auto i : ans) {
        cout << i << ' ';
    }
    cout << '\n';
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