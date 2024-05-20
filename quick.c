#include<stdio.h>
#include<conio.h>
void quick(int a[],int l,int r)
{
    int p;
    if(l<r)
    {
        p=partition(a,l,r);
        quick(a,l,p-1);
        quick(a,p+1,r);
    }
}
int partition(int a[],int l,int r)
{ int x,i,j;
  x=a[r];
  i=l-1;
  for(j=l;j<r;j++)
  {
    if(a[j]<=x)
    {
    i++;
    swap(&a[i],&a[j]);
    }
  }
  swap(&a[i+1],&a[r]);
  return i+1;
    

   
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int  main()
{
int a[100],n,i;
printf("Enter no. of items:");
scanf("%d", &n);
printf("Enter %d data items:", n);

for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
printf(" data before sorting :");
for (i = 0; i < n; i++)
{
printf("%d ", a[i]);
}

quick(a, 0,n-1);
printf("\ndata after sorting :");
for (i = 0; i < n; i++)
{
printf("%d  ", a[i]);
}
}
