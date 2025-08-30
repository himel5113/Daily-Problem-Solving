#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll testCase; cin>>testCase; while(testCase--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n;
    cin>>n;
    vector<ll>V(n);
    for(ll i=0; i<n; i++)
    cin>>V[i];

    ll sum1=0, sum2=0;
    for(ll i=0; i<n; i++) {
        if(V[i]%2==0)
        sum1+=V[i];
        else
        sum2+=V[i];
    }

    string ans = ((sum1%2==0 && sum2%2==0) || (sum1%2==1 && sum2%2==1)) ? "YES" : "NO";
    cout<<ans<<endl;
}

int main() {

    opt();

    tc() {
        solve();
    }
}
