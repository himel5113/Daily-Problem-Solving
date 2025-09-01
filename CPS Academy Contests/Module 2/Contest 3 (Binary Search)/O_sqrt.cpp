#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

double f(double x) {
    return x * x;
}

void solve() {
    cout << "Please enter any number: ";
    double n; cin >> n;
    if(n < 0) {
        cout << "Accept positive number only!\n"; return;
    }
    double l = 0, r = 1e6, ans = 0;
    while(r - l >= 1e-7) {
        double mid = l + (r - l) / 2;
        if(f(mid) <= n) {
            ans = mid;
            l = mid;
        }
        else {
            r = mid;
        }
    }
    cout << fixed << setprecision(6) << "Square root of " << n << " is " << ans << '\n'; 
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