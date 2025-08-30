
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll a, b, c;
    cin>>a>>b>>c;

    if((a+b)==c || (b+c)==a || (a+c)==b)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

int main() {
    ll t;
    cin>>t;
    while(t--) {
        solve();
    }
}
