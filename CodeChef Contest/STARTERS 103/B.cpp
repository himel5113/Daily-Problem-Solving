#include<bits/stdc++.h>
#define ll unsigned long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll x, y;
    cin>>x>>y;
    ll temp = x/y;
    if(temp>=20)
    cout<<20<<endl;
    else
    cout<<temp<<endl;
}

int main() {
    opt();
    tc() {
        solve();
    }

    return 0;
}