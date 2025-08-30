#include<bits/stdc++.h>
#include<string>
#include<vector>
#define ll long long
#define endl '\n'
#define st(a) sort(a, a+n)
#define tc() ll test_case;cin>>test_case;while(test_case--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve()
{
    string ans, s;
    for(ll i=1; i<=8; i++) {
        cin>>s;   
        for(int j=0; j<8; j++) {
            if(s[j]!='.')
            ans+=s[j];
        }  
    }
    cout<<ans<<endl;
}

/*   ***another valid solution
    void solve()
{
    char s[9][9];
    vector<char>v;
    for(ll i=0; i<8; i++) {
        for(ll j=0; j<8; j++) {
            cin>>s[i][j];
            if(s[i][j]!='.')
            v.push_back((s[i][j]));
        }
    }
    for(char it:v)
    cout<<it;

    cout<<endl;
}
*/

int main()
{
    opt();

    tc()
    {
        solve();
    }

    return 0;
}
