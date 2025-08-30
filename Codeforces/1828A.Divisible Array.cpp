
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
    ll n;
    cin>>n;
    if(n%2!=0) {
        for(int i=1; i<=n; i++)
        cout<<i<<" ";
    }
    else {
        ll temp=0;
        for(int i=1; i<=n; i++) {
            temp+=2;
            cout<<temp<<" ";
        }
    }
    cout<<endl;
}
 
int main() {
    ll t;
    cin>>t;
    while(t--) {
        solve();
    }
}
