#include<stdio.h>
int main()
{
    int a[100],key,i,n;
    printf("enter the number of elements in array:");
    scanf("%d",&n);
    printf("enter %d numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter number to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("%d is present in position  %d",key,i+1);
            break;
        }
    }
    if(i==n)
    printf("number %d is not present",key);
    return 0;    
    
}