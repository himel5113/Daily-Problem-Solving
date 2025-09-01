#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
const int N = 1e7 + 5;

ll arr[N];

void preCalc() {
    for(ll i = 1; i < N; i++) {
        for(ll j = i; j < N; j += i) {
            arr[j]++;
        }
    }
}

void solve() {
    ll n; cin >> n;
    ll sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += (arr[i] * i);
    }
    cout << sum << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    preCalc();

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}