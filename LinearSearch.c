#include<stdio.h>
int main()
{
    int a[15],i,j=1,n,val,pos=-1;
    clrscr()
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Array elements are");
   for(i=1;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter the element to be searched:");
    scanf("%d",&val);
    while(j<=n)
    {
        if(a[j]==val)
        {
            pos=j;
            printf("%d found at location %d",val,pos);
        }
     j=j+1;
    }
    if(pos==-1)
    printf("Value is not present in the array");
    return(0);
}