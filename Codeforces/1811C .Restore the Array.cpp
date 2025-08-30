#include<bits/stdc++.h>
#include<vector>
#define ll long long 
#define endl '\n'
#define st(a) sort(a, a+n)
#define vecst(v) sort(v.begin(), v.end())
#define tc() ll test_case;cin>>test_case;while(test_case--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve () {
    ll n;
    cin>>n;
    n=n-1;
    vector<ll>a(n), b(n+1);
    for(ll i=0; i<n; i++)
    cin>>a[i];

    b[0]=a[0];
    b[n]=a[n-1];
    for(ll i=0; i<n-1; i++) {
        b[i+1]=min(a[i], a[i+1]);
    }
    for(ll it:b)
    cout<<it<<" ";

    cout<<endl;
}

int main() {

    opt();

    tc() {
        solve();
    }

    return 0;
}
