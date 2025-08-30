
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define checking "codeforces"
void solve() {
    char ch;
    cin>>ch;
    bool ischeck=false;
    for(int i=0; i<sizeof(checking); i++) {
        if(checking[i]==ch) {
            ischeck=true;
            break;
        }
    }
    if(ischeck)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
