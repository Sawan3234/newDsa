#include<stdio.h>
#include<conio.h>
int stack[100],ch,n,i,top=-1;
void push();
void pop();
void display();
void main()
{
    printf("enter the size of array");
    scanf("%d",&n);
    while(ch!=4){
    printf("1.push  2.pop  3.dispaly  4.exit");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        printf("exiting.....");
        default:
        printf("invalid choice");
    }
    }
}
void push()
{
    int val;
    if(top==n)
    {
        printf("stack over flow");
    }
    else{
        printf("enter the value to push:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void pop()
{
    int item;
    if(top<0)
    {
        printf("underflow");

    }
    else {
       item=stack[top];
       top=top-1;
       printf("popped value is :%d",item);
    }
}
void display()
{
    for(i=top;i>=0;i--)
    {
        printf("%d\n ",stack[i]);
    }
    if (top<0)
    {
        printf("stack is empty");
    }
}