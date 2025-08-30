#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll a, b, c, d;
    cin>>a>>b>>c>>d;
    cout<<max(a, b)<<" "<<max(b, c)<<" "<<min(c, d);
    cout<<endl;
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}
