#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
const int N = 2e5 + 5;

int arr[N];
void rec(int l, int r, int &i) {
    if(l > r) return;
    int mid = (((r - l + 1) & 1) ? (r + l) / 2 : (r + l - 1) / 2);
    // bug(mid);
    arr[mid] = i++;
    rec(l, mid - 1, i);
    rec(mid + 1, r, i);
}

void solve() {
    int n; cin >> n;
    int i = 1;
    rec(0, n - 1, i);
    for(int j = 0; j < n; j++) cout << arr[j] << ' '; cout << '\n';
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