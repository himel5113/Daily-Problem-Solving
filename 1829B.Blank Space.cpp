
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, count=0, max=0;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
    cin>>a[i];
 
    for(ll i=0; i<n; i++) {
        if(a[i]==0)
        count++;
        else
        {
            if(count>max)
            max=count;
             
            count=0;
        }
    }
    if(count>max)
    max=count;
 
    cout<<max<<endl;
}

int main() {
    ll t;
    cin>>t;
    while(t--) {
        solve();
    }
}
