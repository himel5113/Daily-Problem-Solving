#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc() ll t;cin>>t;while(t--)

void solve() {
    ll n, k, x; cin >> n >> k >> x;
    if(k > n || k > x+1) {
        cout << -1 << endl; return;
    }
    if(k == x) {
        ll t1 = ((k-1)*(k-1+1))/2;
        ll t2 = (n-k)*(x-1);
        cout << t1 + t2 << endl;
    }
    else {
        ll t1 = ((k-1)*(k-1+1))/2;
        ll t2 = (n-k)*x;
        cout << t1 + t2 << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    tc() {
        solve();
    }
    return 0;
}