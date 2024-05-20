#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 20
struct cqueue{
    int item[size];
    int front;
    int rear;
};
typedef struct cqueue qu;
void insert(qu*);
void delete(qu*);
void display(qu*);
void main()
{
    qu *q;
    int ch;
    q->rear=size-1;
    q->front=size-1;
    printf("1.insert 2.delete 3.display 4.exit\n");
    do
    {
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insert(q);
            break;
            case 2:
            delete(q);
            break;
            case 3:
            display(q);
            break;
            case 4:
            exit(1);
            default :
            printf("invalid choice:");

        }

    }while(ch<5);
}
void insert(qu *q)
{
    int d;
    printf("enter data to insert:");
    scanf("%d",&d);
    if((q->rear+1)%size==q->front)
    printf("overflow\n");
    else{
        q->rear=(q->rear+1)%size;
        q->item[q->rear]=d;
    }
}
void delete(qu* q)
{
    int d;
    if(q->front==q->rear)
    {
        printf("empty\n");
    }
    else{
        d=q->item[q->front];
        q->front=(q->front+1)%size;
        printf("deleted data is:%d",d);
    }
}
void display(qu* q)
{
    int i;
    if(q->front==q->rear)
    {
        printf("empty\n");
    }
    else{
        for(i=(q->front+1)%size;i!=(q->rear+1)%size;i=(i+1)%size)
        {
            printf("%d",q->item[i]);
        }
        printf("%d",q->item[q->rear]);
    }
}