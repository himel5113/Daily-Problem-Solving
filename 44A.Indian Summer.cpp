#include<bits/stdc++.h>
#include<string>
#define ll long long
#define endl '\n'
#define tc() ll testCase;cin>>testCase;while(testCase--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main() {

    opt();

    ll n;
    cin>>n;

    pair<string, string>s;
    set<pair<string, string>>ans;
    
    for(ll i=0; i<n; i++) {
        cin>>s.first>>s.second;

        ans.insert(s);
    }
    cout<<ans.size()<<endl;


    return 0;
}
