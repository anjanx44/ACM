#include<stdio.h>
int main()
{
    int n,s;
    while(scanf("%d",&n)==1)
    {
        s=0;
        s=n;
        while(n>=3)
        {
            s=s+n/3;
            n=n/3+n%3;
        }
        if(n==2)
        s++;
        printf("%d\n",s);
    }
    return 0;
}
