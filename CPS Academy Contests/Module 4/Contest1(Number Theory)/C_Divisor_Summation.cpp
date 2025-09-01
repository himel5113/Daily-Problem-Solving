#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
const int N = 500009;

vector<pair<ll, ll>> pr;

void preCalc() {
    for(int k = 1; k <= N; k++) {
        ll sum = 0;
        for(int i = 1; i * i <= k; i++) {
            if(k % i == 0) {
                sum += i;
                if(i != k/i) sum += (k/i);
            }
        }
        sum -= k;
        pr.push_back({k, sum});
    }
}


void solve() {
    ll n; cin >> n;
    cout << pr[n-1].second << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    preCalc();

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}