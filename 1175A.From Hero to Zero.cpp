#include<bits/stdc++.h>
#define ll long long
#define tc() ll t;cin>>t;while(t--)
#define endl '\n'
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n, k, count=0;
    cin>>n>>k;
    while(n>0) {
        if(n%k==0) {
            n/=k;
            count++;
        }
        else {
            count+=(n%k);
            n-=(n%k);
        }
    }
    cout<<count<<endl;
}
int main() {
    opt();

    tc() {
        solve();
    }

    return 0;
}
