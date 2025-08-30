#include<bits/stdc++.h>
#include<vector>
#include<string>
#define ll long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

/*void solve() {
    ll m, n;
    cin>>m>>n;
    vector<string> V;
    string s;
    for(ll i=0; i<m; i++) {
        cin>>s;
        V.push_back(s);
    }

    string ans;
    int k=0;

    string check = "vika";
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<m; j++) {
            if(V[j][i]==check[k]) {
            ans.push_back(check[k]);
            k++;
            break;
            }
        }
    }
    if(ans==check)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;;
}*/

/*void solve() {
    ll n, m;
    cin>>n>>m;
    char arr[n][m];
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<m; j++) {
            cin>>arr[i][j];
        }
    }
    string check = "vika";
    int c = 0;
    bool f = false;
    
    for(ll j=0; j<m && c<4; j++) {
        for(ll i=0; i<n; i++) {
            if(arr[i][j]==check[c]) {
                f = true;
                c++;
                break;
            }
        }
    }
    if(c==4) cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}*/

void solve() {
    ll m, n;
    cin>>m>>n;
    char arr[m][n];
    for(ll i=0; i<m; i++) {
        for(ll j=0; j<n; j++) {
            cin>>arr[i][j];
        }
    }

    queue<char>q;
    q.push('v');
    q.push('i');
    q.push('k');
    q.push('a');

    for(ll i=0; i<n; i++) {
        for(ll j=0; j<m; j++) {
            if(arr[j][i]==q.front()) {
                q.pop();
                break;
            }
        }
    }
    if(q.empty())
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

int main() {
    opt();
    tc() {
        solve();
    }

    return 0;
}
