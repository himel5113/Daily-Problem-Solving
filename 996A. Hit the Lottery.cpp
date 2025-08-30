#include<bits/stdc++.h>
#include<vector>
#define ll     long long
#define endl   '\n'
#define tc()   ll test_case;cin>>test_case;while(test_case--)
#define opt()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n;
    cin>>n;
    ll ans = 0;
    vector<ll> V =  {100, 20, 10, 5, 1};

    for(auto x:V) {
        ans+=n/x;
        //cout<<ans<< " "<<endl;
        n%=x;
        //cout<<n<<endl;
    }
    cout<<ans<<endl;
}

int main() {
    opt();

    solve();

    return 0;
}
