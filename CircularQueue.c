#include<stdio.h>
# define Max 5
static int cqueue[Max];
 static int front=-1,rear=-1;
int Insert();
int Delete();
int Display();
int main()
{
    int ch;
    do
    {
        printf("\n*** MAIN MENU***");
        printf("\n 1:INSERT");
        printf("\n 2:DELETE");
        printf("\n 3:DISPLAY");
        printf("\n 4: EXIT");
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
               Display();
               break;
        }
    }while(ch!=4);
    return(0);
}
int Insert()
{
    int item;
    if(front==0 && rear==Max-1)
    {
        printf("OVERFLOW");
    }
    else
    {
        printf("Enter the element to insert:");
        scanf("%d",&item);
        if(front==-1 && rear==-1)
        {
          rear=0;
          front=0;
        }
        else if(rear==Max-1 && front!=0)
        {
          rear=0;
        }
        else
        {
          rear=rear+1;
        }
        cqueue[rear]=item;
     }
    return(0);
}
int Delete()
{
    int val;
    if(front==-1 || front==rear+1)
    {
        printf("UNDERFLOW");
    }
    else
    {
        val=cqueue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else if(front==Max-1)
        {
            front=0;
        }
        else
        {
            front=front+1;
        }
        printf("Deleted element is %d",val);
    }
    return(0);
}
int Display()
{
    int i;
    if(front==-1 && rear==-1)
      printf("CIRCULAR QUEUE IS EMPTY");
    else
    {
        printf("***CIRCULAR QUEUE***\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d \t",cqueue[i]);
        }
    }
    return(0);
}