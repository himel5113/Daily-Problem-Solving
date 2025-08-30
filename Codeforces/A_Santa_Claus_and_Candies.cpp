#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> temp;
    int i = 1;
    while(n > 0) {
        if(n - i >= 0) {
            temp.push_back(i);
            n -= i;
            i++;
        }
        else break;
    }
    // bug(n);
    cout << temp.size() << '\n';
    temp[temp.size() - 1] += n;
    for(auto u : temp) cout << u << ' ';
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