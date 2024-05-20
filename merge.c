#include<stdio.h>
void merge(int a[],int l,int m,int r)
{
    int x=l;
    int k=l;
    int b[10];
    int y=m;
    while(x<m && y<=r)
    {
        if(a[x]<a[y])
        {
            b[k]=a[x];
            k++;
            x++;
        }
        else{
            b[k]=a[y];
            k++;
            y++;
        }
    }
    while(x<m)
    {
        b[k]=a[x];
        k++;
        x++;
    }
    while(y<=r)
    {
        b[k]=a[y];
        y++;
        k++; 
    }
    for(int i=l;i<=r;i++)
    {
        a[i]=b[i];
    }
}
void merge_sort(int a[],int l,int r)
{
    int mid;
    if(l<r)
    {
        mid=(l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,mid+1,r);
    }
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

merge_sort(a, 0,n-1);
printf("\ndata after sorting :");
for (i = 0; i < n; i++)
{
printf("%d  ", a[i]);
}
}
