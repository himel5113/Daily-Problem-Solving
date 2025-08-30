#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        const int MAXkilometers=5;
        if(a*MAXkilometers>=b)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}