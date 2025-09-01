#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc() ll t;cin>>t;while(t--)

void solve() {
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    ll cnt = 0;
    for(ll i=0; i<n; i++) {
        if(s[i] == 'B') {
            cnt++; i+=(k-1);
        }
    }
    cout << cnt << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    tc() {
        solve();
    }
    return 0;
}