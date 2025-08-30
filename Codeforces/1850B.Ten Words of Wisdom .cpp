#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define endl '\n'
#define st(a) sort(a, a+n)
#define vecmax(a) *max_element(a.begin(), a.end())
#define tc() ll test_case;cin>>test_case;while(test_case--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n;
    cin>>n;
    pair<ll, ll>a;
    vector<ll>temp1, temp2;
    for(ll i=0; i<n; i++) {
        cin>>a.first>>a.second;
        if(a.first<=10) {
            temp1.push_back(a.first);
            temp2.push_back(a.second);
        }
        else {
            temp1.push_back(0);
            temp2.push_back(0);
        }
    }
    ll maxi=vecmax(temp2), ans=0;
    for(ll i=0; i<temp2.size(); i++) {
        if(temp2[i]==maxi)
        ans=i;
    }
    cout<<ans+1<<endl;
}

int main()
{
    opt();

    tc()
    {
        solve();
    }

    return 0;
}
