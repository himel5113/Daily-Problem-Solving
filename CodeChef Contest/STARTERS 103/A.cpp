#include<bits/stdc++.h>
#define ll unsigned long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n;
    cin>>n;
    if(n<3) cout<<"GOLD"<<endl;
    else if(n>=3 && n<6) cout<<"SILVER"<<endl;
    else cout<<"BRONZE"<<endl;
}

int main() {
    opt();
    solve();

    return 0;
}