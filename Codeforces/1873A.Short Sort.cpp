#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    string s;
    cin>>s;
    if(s=="abc" || s=="acb" || s=="bac" || s=="cba")
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

int main() {
    opt();
    tc() {
        solve();
    }

    return 0;
}
