#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 20
struct queue{
    int item[size];
    int front;
    int rear;
};
typedef struct queue qu;
void insert(qu*);
void delete(qu*);
void display(qu*);
void main()
{
    qu* q;
    int ch;
    q->rear=-1;
    q->front=0;
    printf("1.insert 2.delete 3.display 4.exit\n");
    while(ch<5)
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

    }
}
void insert(qu* q)
{
    int d;
    printf("enter the data to insert:");
    scanf("%d",&d);
    if(q->rear==size-1)
    {
        printf("queue is full\n");
    }
    else{
        q->rear++;
        q->item[q->rear]=d;
    }
}
void delete(qu* q)
{    int d;
    if(q->front==q->rear)
    printf("queue is empty\n");
    else
    {
        d=q->item[q->front];
        q->front++;
        printf("deleted data is :%d",d);
    }
}
void display(qu *q)
{
    int i;
    if(q->front==q->rear)
    printf("queue is empty\n");
    else{
    for(i=q->front;i<=q->rear;i++)
    {
        printf("%d",q->item[i]);
    }
    }
}

