#include<stdio.h>
int func(int,int,int,int);
int func(int a,int b,int c,int n)
{
    if(n==1)
        return a;
    else if(n==2)
        return b;
    else if(n==3)
        return c;
    else
        return (func(a,b,c,n-1)+func(a,b,c,n-2)+func(a,b,c,n-3));
}
int main()
{
    int a,b,c,n,s;
    scanf("%d",&n);
    scanf("%d%d%d",&a,&b,&c);
    s=func(a,b,c,n);
    printf("%d",s);
}