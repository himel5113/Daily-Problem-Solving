#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
const int N = 1e6 + 6;

int arr[N];

void preCalc() {
    for(int i = 1; i < N; i++) {
        for(int j = i; j < N; j += i) {
            arr[j]++;
        }
    }
}

void solve() {
    int n; cin >> n;
    cout << arr[n] << '\n';
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