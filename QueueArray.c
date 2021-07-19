#include<stdio.h>
#define Max 10
static int queue[Max];
static int rear=-1,front=-1;
int Insert();
int Delete();
int Peek();
int Display();
int main()
{
    int ch;
    do
    {
        printf("\n*** MAIN MENU***");
        printf("\n 1:INSERT");
        printf("\n 2:DELETE");
        printf("\n 3:PEEK");
        printf("\n 4:DISPLAY");
        printf("\n 5: EXIT");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
               Insert();
               break;
            case 2:
               Delete();
               break;
            case 3:
               Peek();
               break;
            case 4:
               Display();
               break;
        }
    }while(ch!=5);
    return(0);
}
int Insert()
{
    int item;
    if(rear==Max-1)
     printf("OVERFLOW");
    else
    {
        printf("Enter the element to Insert:");
        scanf("%d",&item);
        if(front==-1 && rear==-1)
        {
            front=0;
            rear=0;
        }
       else
       {
          rear=rear+1;
       }
    queue[rear]=item;
     }
    return(0);
}
int Delete()
{
    int val;
    if(front==-1 || front>rear)
       printf("UNDERFLOW");
    else
    {
        val= queue[front];
        front=front+1;
        printf("Deleted element is %d",val);
    }
    return(0);
}
int Peek()
{
    if(front==-1 && rear==-1)
    printf("QUEUE IS EMPTY");
    else
    {
        printf("Front element is:%d\n",queue[front]);
        printf("Rear element is:%d\n",queue[rear]);
    }
    return(0);
}
int Display()
{
    int i;
    if(front==-1 && rear==-1)
    printf("QUEUE IS EMPTY");
    else
    {
        printf("\n*** QUEUE ***\n");
        for(i=front;i<=rear; i++)
        {
            printf("%d \t",queue[i]);
        }
    }
    return(0);
}