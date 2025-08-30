#include<bits/stdc++.h>
#include<string>
#define tc() long long t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    opt();

    string s;
    string check_string = "hello";
    cin>>s;
    ll i=0, j=0;

    while(i<s.size() && j<check_string.size()) {
        if(s[i]==check_string[j]) {
            j++; i++;
        }
        else
        i++;
    }
    if(j==check_string.size())
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
