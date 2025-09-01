#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

int c = 1;
void solve() {
    cout << "Case " << c++ << ": ";
    double ab, ac, bc, r; cin >> ab >> ac >> bc >> r;
    double temp = sqrt(r / (r + 1));
    double ad = ab * temp;
    cout << fixed << setprecision(15) << ad << '\n';
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