#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define vecst(a) sort(a.begin(), a.end())
#define min(a) *min_element(a.begin(), a.end())
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
   char c[11][11];
   for(ll i=0; i<10; i++) {
     for(ll j=0; j<10; j++)  {
        cin>>c[i][j];
     }
   }
   ll ans = 0;
   int a[10][10] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    
    for(ll i=0; i<10; i++) {
        for(ll j=0; j<10; j++) {
            if(c[i][j]=='X') {
                ans+=a[i][j];
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    opt();
    tc() {
        solve();
    }

    return 0;
}
