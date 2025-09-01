#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x; cin >> x;

    int l = 0, r = n - 1;
    sort(arr, arr + n);
    while(l <= r) {
        int mid = (l + r) / 2;
        if(arr[mid] == x) {
            cout << mid << '\n'; return;
        }
        if(arr[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    cout << "-1\n";
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