//IN SEARCH OF AN EASY PROBLEM
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    bool isCheck=false;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];

        if(arr[i]==1)
        isCheck=true;;
    }
    if(isCheck)
    cout<<"HARD"<<endl;
    else
    cout<<"EASY"<<endl;
}
