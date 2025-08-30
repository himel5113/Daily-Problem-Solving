#include<bits/stdc++.h>
#include<string>
#define ll long long
#define endl '\n'
#define st(a) sort(a, a+n)
#define tc() ll test_case;cin>>test_case;while(test_case--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main() {

    opt();
    
    string s;
    cin>>s;
    for(ll i=0; i<s.size(); i++) {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9') {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
