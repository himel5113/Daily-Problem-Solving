#include<iostream>
using namespace std;
void solve(){
    int n, a, b, sum1=0, sum2=0;
    cin>>n>>a>>b;
    for(int i=1; i<=n; i++){
        if(i%2==0)
        sum1+=(1*a);
        else
        sum2+=(1*b);
    }
    cout<<(sum1+sum2)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}