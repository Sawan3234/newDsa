#include<stdio.h>
int binarysearch(int x[],int,int,int);
int main()
{
    int n,a[100],i,key, flag;
    printf("enter no data items:");
    scanf("%d",&n);
    printf("enter %d data in sorted form:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter number to search:");
    scanf("%d",&key);
    flag=binarysearch(a,0,n-1,key);
    if(flag==0)
    printf("search un-successful");
    else
    printf("%d found at location %d",key,flag+1);
    return 0;
}
 int binarysearch(int a[100],int l,int r, int key)
{
  int m,flag=0;
  if(l<=r)
  {
    m=(l+r)/2;
    if(key==a[m])
    flag=m;
    else if (key<a[m])
    return binarysearch(a,l,m-1,key);
    else
    return binarysearch(a,m+1,r,key);
  }
  else 
  return flag;
}