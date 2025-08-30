#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double

int main() {
    ll n, m, a;
    cin>>n>>m>>a;
    ll result=ceil((dd)n/a)*ceil((dd)m/a);
    cout<<result;
}
