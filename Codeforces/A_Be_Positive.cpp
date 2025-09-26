#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> V(n);
    int neg = 0, zero = 0;
    for(int i = 0; i < n; i++) {
        cin >> V[i];
        if(V[i] < 0) neg++;
        if(V[i] == 0) zero++;
    }
    if(neg % 2 == 0 ) {
        cout << zero << '\n';
    }
    else {
        cout << zero + 2 << '\n';
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