#include<bits/stdc++.h>
#include<string>
#define ll long long
#define endl '\n'
#define st(a) sort(a, a+n)
#define tc() ll test_case;cin>>test_case;while(test_case--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const ll M = 1e6+3;

using namespace std;

int binToDec(string st) {
    
    ll dec=0;
    ll base=1;
    for(ll i=st.size()-1; i>=0; i--) {
        if(st[i]=='1')
        dec = (dec+base)%M;

        base=(base*2)%M;
    }
    return dec;
}

int main() {

    opt();

    string s;
    cin>>s;

    string ans=" ";

    for(ll i=0; i<s.size(); i++) {
        if(s[i]=='>')
        ans+="1000";
        if(s[i]=='<')
        ans+="1001";
        if(s[i]=='+')
        ans+="1010";
        if(s[i]=='-')
        ans+="1011";
        if(s[i]=='.')
        ans+="1100";
        if(s[i]==',')
        ans+="1101";
        if(s[i]=='[')
        ans+="1110";
        if(s[i]==']')
        ans+="1111";
    } 
    cout<<binToDec(ans)<<endl;
}
