#include<stdio.h>
int fact (int n)
{
    if(n==0)
    return 1;
    else{
        return (n*fact(n-1));
    }
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
   int factorial=fact(num);
    printf("factorial of %d is %d\n",num,factorial);
    return 0;

}