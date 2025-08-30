
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, sum1=0, sum2=0;
    cin>>n;
    ll arr[n];
    for(ll i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(ll i=0; i<n; i++) {
        if(arr[i]%2==0)
        sum1+=arr[i];
        
        else if(arr[i]%2!=0)
        sum2+=arr[i];
    }
    if(sum1<=sum2)
    cout<<"No"<<endl;
    else
    cout<<"Yes"<<endl;
}

int main() {
    ll t;
    cin>>t;
    while(t--) {
        solve();
    }
}
