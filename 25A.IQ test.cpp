#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n, odd=0, even=0, ans;
    cin>>n;
    vector<ll>V(n);
    for(ll i=0; i<n; i++) {
        cin>>V[i];
        if(V[i]%2)
        odd++;
        else
        even++;
    }
    if(odd>even) {
        for(ll i=0; i<n; i++) {
            if(V[i]%2==0)
            ans = i;
        }
    }
    else {
        for(ll i=0; i<n; i++) {
            if(V[i]%2!=0)
            ans = i;
        }
    }

    cout<<ans+1<<endl;
}

int main() {
    opt();
    solve();

    return 0;
}
