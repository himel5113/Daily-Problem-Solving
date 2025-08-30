#include<bits/stdc++.h>
#include<string>
#define ll long long
#define endl '\n'
#define tc() ll test_case;cin>>test_case;while(test_case--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int solve() {
    ll x, k;
    cin>>x>>k;
    if(x%k==0) {
        for(ll i=x; i>=1; i--) {
            for(ll j=1; j<=x; j++) {
                if(i%k!=0 && j%k!=0) {
                    cout<<2<<endl;
                    cout<<i<<" "<<j<<endl;
                    return 0;
                }
            }
        }
    }
    else {
        cout<<1<<endl;
        cout<<x<<endl;
    }
    return 0;
}

int main() {
    opt();

    tc() {
        solve();
    }

    return 0;
}
