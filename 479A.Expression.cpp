#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int a, b, c, sol1, sol2, sol3, sol4, sol5;
    cin>>a>>b>>c;
    sol1=a+b*c;
    sol2=a*(b+c);
    sol3=a*b*c;
    sol4=(a+b)*c;
    sol5=a+b+c;

    ll ans=max(sol5, max(sol4, max(sol3, max(sol1, sol2))));
    cout<<ans<<endl;
}
