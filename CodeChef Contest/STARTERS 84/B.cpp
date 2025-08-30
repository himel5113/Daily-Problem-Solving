#include <iostream>
using namespace std;
#define ll long long
void solve()
{
    ll n, x, count=0;
    cin>>n>>x;
    ll a[n];
    for(ll i=0; i<n; i++)
    cin>>a[i];
    for(ll i=0; i<n; i++)
    {
        if(a[i]>=x) count++;
        else count;
    }
    cout<<count;
    cout<<endl;
}
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
	return 0;
}