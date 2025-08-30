#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin>>n;
    if((n%2!=0) && (n%9==0))
    cout<<"Bob"<<endl;
    else if((n%2==0) && (n%7==0))
    cout<<"Alice"<<endl;
    else
    cout<<"Charlie"<<endl;
}

int main() {
    ll t;
    cin>>t;
    while(t--) {
        solve();
    }
}