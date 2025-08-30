#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a, b, x, y;
    cin>>a>>b>>x>>y;
    
    ll messi = (2*a)+b;
    ll ronaldo = (2*x)+y;
    if(messi>ronaldo)
    cout<<"Messi"<<endl;
    else if(messi<ronaldo)
    cout<<"Ronaldo"<<endl;
    else if(messi==ronaldo)
    cout<<"Equal"<<endl;
}