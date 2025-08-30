#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n, count = 0;
    cin>>n;
    string s;
    cin>>s;
    for(ll i=0; i<n-1; i+=2) {
        if(s[i]=='a' && s[i+1]=='a') {
            s[i]='b';
            count++;
        }
        if(s[i]=='b' && s[i+1]=='b') {
            s[i]='a';
            count++;
        }
    }
    cout<<count<<endl<<s<<endl;
}

int main() {
    opt();
    solve();

    return 0;
}
