#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bug(a) cout << #a << " : " << a << endl;
const ll MOD = 1e9 + 7;
const int N = 2e5+5;
int n, k;
int arr[N];

bool f(ll x) {
	ll sum = 0;
	for(int i = 0; i < n; i++) {
		sum += (x / arr[i]);
	}
	return sum >= k;
}

void solve() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
    	cin >> arr[i];
    }
    ll l = 0, r = 1e18, ans = 0;
    while(l <= r) {
    	ll mid = l + (r - l) / 2;
    	if(f(mid)) {
    		ans = mid;
    		r = mid - 1;
    	}
    	else {
    		l = mid + 1;
    	}
    }
    cout << ans << '\n';
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