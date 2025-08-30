
#include<iostream>
using namespace std;
int main()
{
    int y,w;
    cin>>y>>w;
    if(y==6 || w==6)
        cout<<"1/6";
    else if(y==5 || w==5)
        cout<<"1/3";
    else if(y==4 || w==4)
        cout<<"1/2";
    else if(y==3 || w==3)
        cout<<"2/3";
    else if(y==2 || w==2)
        cout<<"5/6";
    else if(y==1 || w==1)
        cout<<"1/1";

    return 0;
}
