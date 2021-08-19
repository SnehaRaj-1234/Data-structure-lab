#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *start,*second,*third;
    
    start=(struct node *)malloc(sizeof(struct node));
    start->data=10;
    start->next=second;
    
    second=(struct node *)malloc(sizeof(struct node));
    second->data=20;
    second->next=third;
    
    third=(struct node *)malloc(sizeof(struct node));
    third->data=30;
    third->next=NULL;
  printf("%d-->%d-->%d",start->data,second->data,third->data);
    return(0);
}