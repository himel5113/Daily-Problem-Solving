#include<bits/stdc++.h>
#include<stack>
#define ll long long
#define endl '\n'
#define st(a) sort(a, a+n)
#define tc() ll test_case;cin>>test_case;while(test_case--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve()
{
    ll n, sum=0;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++) {
        cin>>a[i];
        sum+=a[i];
    }
    //cout<<sum<<" ";
    st(a);
    cout<<sum<<" ";
    for(ll i=0; i<n-1; i++) {   
        sum-=a[i];
        cout<<sum<<" ";
    }
    cout<<endl;
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