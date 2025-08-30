#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll testCase; cin>>testCase; while(testCase--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n, temp;
    cin>>n;
    //vector<ll>V;
    set<ll>st;
    for(ll i=0; i<n; i++) {
        cin>>temp;
        st.insert(temp);
    }
    ll ans = n-st.size();
    if(ans%2) cout<<st.size()-1<<endl;
    else cout<<st.size()<<endl;
}

int main() {
    opt();
    tc() {
        solve();
    }

    return 0;
}
