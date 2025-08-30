
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, temp1, temp2, result=0, ans=0;
    cin>>n;
    while(n--) {
        cin>>temp1>>temp2;

        result-=temp1;
        result+=temp2;

        if(result>ans)
        ans=result;
    }
    cout<<ans<<endl;
}
