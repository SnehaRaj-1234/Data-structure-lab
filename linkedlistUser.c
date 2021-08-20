#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*next;
}node;
node *Createlist(int);
void display(node *start);
int main()
{
    int n;
    node *start=NULL;
    printf("How many nodes:");
    scanf("%d",&n);
    start=Createlist(n);
    display(start);
    return 0;
}
node *Createlist(int n)
{
    int i;
    node *start=NULL;
    node *newnode=NULL;
    node *ptr=NULL;
    
    for(i=0;i<n;i++)
    {
        newnode=(node *)malloc(sizeof(node));
        printf("Enter the data for node %d:",i+1);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(start==NULL)
        {
            start=newnode;
        }
        else
        {
            ptr=start;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=newnode;
        }
    }
    return start;
}
void display(node *start)
{
    node *ptr=start;
    while(ptr!=NULL)
    {
        printf("\t %d-->",ptr->data);
        ptr=ptr->next;
    }
}