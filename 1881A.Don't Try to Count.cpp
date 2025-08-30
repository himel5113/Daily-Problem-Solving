#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

/*void solve() {
    ll n, m, count=0;
    cin>>n>>m;
    string x, s;
    cin>>x>>s;
    while(n<m) {
        x += x;
        n += n;
        count++;
    }
    if(x.find(s) != string::npos) {
        cout<<count<<endl;
        return;
    }
    x += x;
    if(x.find(s) != string::npos) {
        cout<<count+1<<endl;
    }
    else {
        cout<<-1<<endl;
    }
}*/

void solve() {
    ll n, m;
    cin>>n>>m;
    string x, s;
    cin>>x>>s;
    bool f = false;
    for(ll i=0; i<6; i++) {
        if(x.find(s) != string::npos) {
            f = true;
            cout<<i<<endl;
            break;
        }
        x+=x;
    }
    if(f == false)
    cout<<-1<<endl;
}

int main() {
    opt();
    tc() {
        solve();
    }

   return 0;
}
