#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define vecst(a) sort(a.begin(), a.end())
#define min(a) *min_element(a.begin(), a.end())
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n;
    cin>>n;
    vector<int>V(n);
    for(ll i=0; i<n; i++) {
        cin>>V[i];
    }
    vecst(V);
    ll temp = 1;
    for(ll i=1; i<n; i++)  {
        temp *= V[i];
    }
    ll ans = temp* (V[0]+1);
    cout<<ans<<endl; 
}

int main() {
    opt();
    tc() {
        solve();
    }

    return 0;
}
