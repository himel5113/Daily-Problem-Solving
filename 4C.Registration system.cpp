#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc() ll t;cin>>t;while(t--)
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main() {
    opt();
    string s;
    map<string, int>m;
    vector<string>st;
    tc() {
        cin>>s;
        if(m[s]==0) {
            cout<<"OK"<<endl;
            m[s]++;
        }
        else {
            cout<<s<<m[s]<<endl;
            m[s]++;
        }
    }
    return 0;
}
