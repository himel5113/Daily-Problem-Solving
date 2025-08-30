#include<bits/stdc++.h>
#define ll     long long
#define endl   '\n'
#define tc()   ll test_case;cin>>test_case;while(test_case--)
#define opt()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(ll i=1; i<=t; i++) {
        for(ll j=0; j<n-1; j++) {
            if(s[j]=='B' && s[j+1]=='G') {
                swap(s[j], s[j+1]);
                j++;
            }
        }
    }
    cout<<s<<endl;
}

int main() {
    opt();

    solve();

    return 0;
}
