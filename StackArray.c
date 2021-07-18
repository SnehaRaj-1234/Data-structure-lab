#include<stdio.h>
#define Max 3
static int stack[Max];
static int top=-1;
int Push();
int Pop();
int Peek();
int Display();
int main()
{
    int ch;
    do
    {
        printf("\n*** MAIN MENU***");
        printf("\n 1:Push");
        printf("\n 2:Pop");
        printf("\n 3:Peek");
        printf("\n 4:Display");
        printf("\n 5:Exit");
        printf("\n Enter your option:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
               Push();
               break;
            case 2:
               Pop();
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
int Push()
{
    int item;
    if(top==Max-1)
       printf("\n OVERFLOW");
    else
    {
        printf("Enter the element to be pushed:");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
    return(0);
}
int Pop()
{
    int val;
    if(top==-1)
     printf("\n UNDERFLOW");
    else
    {
        val=stack[top];
        top=top-1;
        printf("The poped element is:%d",val);
    }
    return(0);
}
int Peek()
{
    if(top==-1)
      printf("STACK IS EMPTY");
    else
      printf("Top element is %d",stack[top]);
    return(0);
}
int Display()
{
    int i;
    if(top==-1)
    printf("STACK IS EMPTY");
    else
    {
        printf("\n***STACK***\n");
        for(i=0;i<=top;i++)
        {
            printf("%d \t",stack[i]);
        }
    }
    return(0);
}