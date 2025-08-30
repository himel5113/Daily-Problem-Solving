#include<bits/stdc++.h>
#include<vector>
#define ll     long long
#define endl   '\n'
#define left_rotate(a)  rotate(a.begin(), a.begin()+1, a.end())
#define tc()   ll test_case;cin>>test_case;while(test_case--)
#define opt()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n;
    cin>>n;
    vector<ll>V;
    for(ll i=0; i<n; i++)
    V.push_back(i+1);

    left_rotate(V);

    for(ll x:V)
    cout<<x<<" ";

    cout<<endl;
}

int main() {
    opt();

    tc() {
        solve();
    }

    return 0;
}
