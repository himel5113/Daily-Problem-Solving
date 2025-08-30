#include <iostream>
using namespace std;
#define ll long long
void solve()
{
    ll x, y, i;
    cin>>x>>y;
    for(i=1; i<=x; i++)
    {
        y+=i;
        if(y>=x)
            break;
    }
    cout<<i<<endl;
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