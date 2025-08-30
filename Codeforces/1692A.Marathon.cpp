
#include<iostream>
using namespace std;
void solve() {
    int a[4], count=0;
    for(int i=0; i<4; i++)
    cin>>a[i];

    int temp=a[0];
    for(int i=1; i<4; i++) {
        if(a[i]>temp)
        count++;
    }
    cout<<count<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
