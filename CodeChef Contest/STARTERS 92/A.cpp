#include <iostream>
using namespace std;


int main() {
    int a, b, result = 111;
    cin>>a>>b;
    int x=a+b+(a*b);
    if(x==result)
    cout<<"Yes";
    else
    cout<<"No";
	return 0;
}