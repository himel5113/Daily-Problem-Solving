
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, x, y, temp;
    cin>>n;
    set<int>res;
    cin>>x;
    for(ll i=0; i<x; i++) {
        cin>>temp;
        res.insert(temp);
    }
    cin>>y;
    for(ll i=0; i<y; i++) {
        cin>>temp;
        res.insert(temp);
    }
    if(res.size()==n)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";
}
