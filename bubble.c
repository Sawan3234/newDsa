#include<stdio.h>
void bubble(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            temp=a[j];
            if(a[j]>a[j+1])
            {
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
int n;
int a[100],i;
printf("enter no of data items:");
scanf("%d",&n);
printf("enter %d data items:",n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("before sorting:");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);

}
bubble(a,n);
printf("\n after sorting:");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
return 0;
}