#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    ll temp = (k*l)/nl;
    ll temp2 = (c*d);
    ll temp3 = p/np;

    ll ans=min(temp, min(temp2, temp3))/n;
    cout<<ans<<endl;
}
