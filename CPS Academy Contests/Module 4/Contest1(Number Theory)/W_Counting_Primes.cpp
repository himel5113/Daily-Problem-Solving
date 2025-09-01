#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
const int N = 1e7 + 5;

int arr[N];

void preCalc() {
    for(int i = 1; i < N; i++) {
        for(int j = i; j < N; j += i) {
            arr[j]++;
        }
    }
}

void solve() {
    ll a, b; cin >> a >> b;
    int cnt = 0;
    for(int i = a; i <= b; i++) {
        if(arr[i] == 2) cnt++;
    }
    cout << cnt << '\n';
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