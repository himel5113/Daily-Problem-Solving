
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, count1=0, count2=0;
    cin>>n;
    ll a[2*n];
    for(ll i=0; i<(2*n); i++)
    cin>>a[i];
    for(ll i=0; i<(2*n); i++)
    {
        if(a[i]%2==0) count1++;
        else if(a[i]%2!=0) count2++;
    }
    if(count1==count2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    solve();
}
