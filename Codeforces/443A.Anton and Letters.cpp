
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long

/**
 *  @author Sudipto Dey Himel
*/

int main() {
    string s;
    getline(cin,s);
    set<char>res;
    for(ll i=0; i<s.size(); i++) {
        if(s[i]>='a' && s[i]<='z')
        res.insert(s[i]);

        else
        continue;
    }
    cout<<res.size()<<endl;

    return 0;
}
