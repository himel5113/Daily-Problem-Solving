
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t, m=0, c=0;
    cin>>t;
    while(t--) {
        ll a, b;
        cin>>a>>b;
        if(a>b)
        m++;
        else
        c++;
    }
    if(m>c)
    cout<<"Mishka"<<endl;
    else if(m<c)
    cout<<"Chris"<<endl;
    else
    cout<<"Friendship is magic!^^"<<endl;
}
