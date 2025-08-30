//BEAUTIFUL SEQUENCE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, count=0;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
    cin>>a[i];
    for(ll i=0; i<n; i++)
    {
        if(a[i]<=(i+1)){
            count=1;
            break;
        }
        else count;
    }
    if(count==1) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
