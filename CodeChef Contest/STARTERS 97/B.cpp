#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll a1, a2, a3, b1, b2, b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    
    ll sum1=a1+a2+a3;
    ll sum2=b1+b2+b3;
    
    ll alice=sum1-min({a1, a2, a3});
    ll bob=sum2-min({b1, b2, b3});
    
    if(alice>bob)
    cout<<"Alice"<<endl;
    else if(alice<bob)
    cout<<"Bob"<<endl;
    else
    cout<<"Tie"<<endl;
    
}

int main() {
    ll t;
    cin>>t;
    while(t--) {
        solve();
    }
}