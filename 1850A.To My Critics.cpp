#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define st(a) sort(a, a+n)
#define tc() ll test_case;cin>>test_case;while(test_case--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve()
{
    ll a, b, c;
    cin>>a>>b>>c;
    if(a+b>=10 || b+c>=10 || a+c>=10)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
