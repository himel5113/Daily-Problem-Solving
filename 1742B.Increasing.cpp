
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, count=0;
    cin>>n;
    ll arr[n];
    for(ll i=0; i<n; i++)
    cin>>arr[i];

    sort(arr, arr+n);

    for(ll i=0; i<n-1; i++) {
        if(arr[i]==arr[i+1])
        count++;
    }
    if(count>0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}

int main() {
    ll t;
    cin>>t;
    while(t--) {
        solve();
    }
}
