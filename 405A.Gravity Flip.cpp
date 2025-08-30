#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define st(a) sort(a, a+n)
#define vecst(v) sort(v.begin(), v.end())
#define tc() ll test_case;cin>>test_case;while(test_case--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main() {

    opt();

    ll n;
    cin>>n;
    vector<ll>ans(n);
    for(ll i=0; i<n; i++) {
        cin>>ans[i];
    }
    vecst(ans);
    for(ll it:ans)
    cout<<it<<" ";
    
    return 0;
}
