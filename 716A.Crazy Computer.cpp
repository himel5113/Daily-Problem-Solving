
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,c,count=0;
    cin>>n>>c;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(ll i=1; i<n; i++)
    {
        if(a[i]-a[i-1]<=c)
            count++;
        else
            count=0;
    }
 
    cout<<count+1;
 
 
    return 0;
}
