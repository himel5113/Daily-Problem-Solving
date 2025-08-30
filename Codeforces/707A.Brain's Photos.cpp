#include<bits/stdc++.h>
#include<string>
#define ll      long long
#define endl   '\n'
#define tc()   ll testCase;cin>>testCase;while(testCase--)
#define opt()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main() {
    opt();

    ll n, m;
    cin>>n>>m;
    char s[n][m];
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<m; j++) {
            cin>>s[i][j];
        }
    }
    ll cnt_C=0, cnt_M=0, cnt_Y=0, cnt_W=0, cnt_G=0, cnt_B=0;
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<m; j++) {
            if(s[i][j]=='C')
            cnt_C++;
            if(s[i][j]=='M')
            cnt_M++;
            if(s[i][j]=='Y')
            cnt_Y++;
            if(s[i][j]=='W')
            cnt_W++;
            if(s[i][j]=='G')
            cnt_G++;
            if(s[i][j]=='B')
            cnt_B++;
        }
    }
    ll temp=cnt_B+cnt_C+cnt_G+cnt_M+cnt_W+cnt_Y;
    if(temp==(cnt_B+cnt_W+cnt_G))
    cout<<"#Black&White"<<endl;
    else
    cout<<"#Color"<<endl;

    return 0;
}
    
