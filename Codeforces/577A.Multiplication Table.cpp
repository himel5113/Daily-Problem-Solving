#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n, x, count=0;
    cin >> n >> x;
    for(ll i=1; i<=n; i++) {
        if(x%i==0 && x/i<=n)
        count++;
    }
    cout<<count<<endl;
}

int main() {
    opt();
    solve();

    return 0;
}
