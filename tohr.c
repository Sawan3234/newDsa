 #include<stdio.h>
 int toh(int,char,char,char);
 int main()
 {
    int n;
    char a,b,c;
    printf("enter number of disk:");
    scanf("%d",&n);
    printf("tower of hanoi of %d\n",n);
    toh(n,'a','b','c');
    return 0;
}
int toh(int n,char beg,char aux,char end)
{
    if(n==1)
    printf("Move disc %c to %c\n",beg,end);
    else{
        toh(n-1,beg,end,aux);
        toh(1,beg,aux,end);
        toh(n-1,aux,beg,end);
    }
}
