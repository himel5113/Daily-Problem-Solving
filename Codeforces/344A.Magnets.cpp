#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define endl '\n'
#define st(a) sort(a, a+n)
#define tc() ll test_case;cin>>test_case;while(test_case--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main() {

    opt();

    ll temp, count=1;
    vector<ll>V;
    tc() {
        cin>>temp;
        V.push_back(temp);
    }
    ll n=V.size();
    for(ll i=0; i<n-1; i++) {
        if(V[i]!=V[i+1])
        count++;
    }
    cout<<count<<endl;
}
