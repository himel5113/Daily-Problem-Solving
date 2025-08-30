#include<bits/stdc++.h>
#define ll long long
#define tc() ll t;cin>>t;while(t--)
#define st(a) sort(a, a+n)
#define endl '\n'
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main() {
    opt();

    ll s, n, temp1, temp2, r;
    cin>>s>>n;
    ll k=s;
    pair<ll, ll>a[n];

    for(ll i=0; i<n; i++) {
        cin>>a[i].first>>a[i].second;
    }
    st(a);
    for(ll i=0; i<n; i++) {
        if(k>a[i].first) {
            k+=a[i].second;
        }
        
        else {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
    
}
