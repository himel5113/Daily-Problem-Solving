#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc() ll t;cin>>t;while(t--)

void solve() {
    ll n; cin >> n;
    ll cnt = 0;
    if(n == 1) {
        cout << 0 << endl; return;
    }
    bool f = true;
    while(n > 1) {
        if(n%2 == 0) n /= 2;
        else if(n%3 == 0) n = (2*n)/3;
        else if(n%5 == 0) n = (4*n)/5;
        else {
            f = false; break;
        }
        cnt++;
    }
    cout << (f ? cnt : -1) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    tc() {
        solve();
    }
    return 0;
}