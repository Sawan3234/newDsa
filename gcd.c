#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,i,gcd;
    printf("enter two numbers:");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1 && i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        gcd=i;
    }
    printf("gcd of %d&%d is:%d",n1,n2,gcd);
    return 0;
}