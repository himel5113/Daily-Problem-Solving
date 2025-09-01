#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

vector<ll> primeFriendly;

bool isPrime(ll n) {
    if (n <= 1) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void generate(long long num) {
    if (num > 0 && isPrime(num)) primeFriendly.push_back(num);
    if (num > 1e18) return;
    for (int d : {2, 3, 5, 7}) {
        long long nxt = num * 10 + d;
        if (nxt <= 1e18) generate(nxt);
    }
}

void solve() {
    for (ll num : primeFriendly) {
        cout << num << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    generate(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}