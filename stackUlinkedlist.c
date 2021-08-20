#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
void push();
void pop();
void display();
static node *start=NULL;
int main()
{
    int ch;
    do
    {
        printf("\n\n ***MAIN MENU***");
        printf("\n 1:PUSH");
        printf("\n 2:POP");
        printf("\n 3:DISPLAY");
        printf("\n 4:EXIT");
        printf("\n\n Enter your option:");
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
        }
    }while(ch!=4);
    return 0;
}
void push()
{
    int val;
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Not able to push the element");
    }
    else
    {
        printf("Enter the value:");
        scanf("%d",&val);
        if(start==NULL)
        {
            ptr->data=val;
            ptr->next=NULL;
            start=ptr;
        }
        else
        {
            ptr->data=val;
            ptr->next=start;
            start=ptr;
        }
        printf("\nItem Pushed");
    }
}
void pop()
{
    int item;
    node *ptr;
    if(start==NULL)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        item=start->data;
        ptr=start;
        start=start->next;
        free(ptr);
        printf("%d Popped \n",item);
    }
}
void display()
{
    node *ptr;
    ptr=start;
    if(ptr==NULL)
    {
        printf("\nStack Is Empty");
    }
    else
    {
        printf("\n***STACK***");
        while(ptr!=NULL)
        {
            printf("%d \n",ptr->data);
            ptr=ptr->next;
        }
    }
}