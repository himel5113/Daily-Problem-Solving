
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, count=1, sum=0;
    cin>>n;
    int x=5;
    while(x<n) {
        x+=5;
        count++;
    }
    cout<<count;
}
