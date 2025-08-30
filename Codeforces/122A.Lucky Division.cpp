#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main() {
    ll n;
    cin>>n;
    vector<ll>V = {4, 7, 47, 744, 477};
    bool check = false;
    for(ll i=0; i<V.size(); i++) {
        if(n%V[i]==0) {
            cout<<"YES"<<endl;
            check = true;
            break;
        }
    }
    if(check == false)
    cout<<"NO"<<endl;

    return 0;
}
