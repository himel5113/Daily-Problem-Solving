#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define arrst(a) sort(a, a+n)
#define vecst(a) sort(a.begin(), a.end())
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<ll>V(n);

    for(ll i=0; i<n; i++)
        cin>>V[i];

    ll count=0;
    for(ll i=0; i<n; i++)
    {
        if(V[i]==i+1)
            count++;
    }
    if(count%2==0)
        cout<<count/2<<endl;
    else
        cout<<(count/2)+1<<endl;
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
