#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define st(a) sort(a, a+n)
#define tc() ll test_case;cin>>test_case;while(test_case--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve()
{
    ll x, y, r;
    cin>>x>>y>>r;
    ll temp1=r/30;
    ll temp2=x+temp1;
    if(temp2%y)
        cout<<(temp2/y)+1<<endl;
    else
        cout<<(temp2/y)<<endl;
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