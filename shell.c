#include<stdio.h>
int main()
{
    int array[100],n;
    int k,i,j,increment,temp;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("Enter %d data items:", n);

for (i = 0; i < n; i++)
{
scanf("%d", &array[i]);
}
printf(" data before sorting :");
for (i = 0; i < n; i++)
{
printf("%d ", array[i]);
}


    for(increment=n/2;increment>0;increment/=2)
    {
        for(i=increment;i<n;i++)
        {
            temp=array[i];
            for(j=i;j>=increment;j-=increment)
            {
                if(temp<array[j-increment])
                {
                    array[j]=array[j-increment];
                }
                else
                break;
            }
             array[j]=temp;
        }
       

    }
    printf("\nafter sorting:");
    for(k=0;k<5;k++)
    {
        printf("%d ",array[k]);
    }
}
