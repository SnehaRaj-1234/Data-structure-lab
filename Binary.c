#include<stdio.h>
int main()
{
    int a[20],i,item,n,beg,end,pos,mid;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements in sorted array:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    printf("\n Array");
    for(i=1;i<=n;i++)
    printf("%d\t",a[i]);
    printf("\n Enter the element to be searched:");
    scanf("%d",&item);
    beg=1;
    end=n;
    pos=-1;
    while(beg<=end)
    {
        mid= (beg+end)/2;
        if(a[mid]==item)
        {
            pos=mid;
            printf("%d found at %d ",item,pos);
            break;
            
        }
        else
        {
            if(a[mid]>item)
            end=mid-1;
            else
              beg=mid+1;
        }
    }
    if(pos==-1)
    printf("Value not present");
    return(0);
}