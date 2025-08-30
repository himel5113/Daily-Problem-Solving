
#include<iostream>
using namespace std;
int main() {
    int n, k, count=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
    scanf("%d", &arr[i]);
    for(int i=0; i<n; i++) {
        int temp=arr[k-1];
        if(arr[i]>0 && arr[i]>=temp)
        count++;
    }
    cout<<count<<endl;
}
