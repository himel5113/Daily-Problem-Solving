#include<bits/stdc++.h>
#include<string>
#define ll long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main() {
    opt();
    
    ll ans=0;
    tc() {
    string s;
    cin>>s;
    if(s=="X++" || s=="++X")
    ans+=1;
    else
    ans-=1;
    }
    cout<<ans<<endl;

    return 0;
}
