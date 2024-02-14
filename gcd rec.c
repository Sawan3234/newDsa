#include<stdio.h>
int gcd(int ,int);
int main()
{
    int n1,n2,i,g;
    printf("enter two numbers:");
    scanf("%d %d ",&n1 ,&n2);
    g=gcd(n1,n2);
    printf("gcd of %d & %d:%d",n1,n2,g);
    return 0;
}
 int gcd(int n1,int n2)
{
    if(n2!=0)
    return (n2,n1%n2);
    else 
    return n1;
}