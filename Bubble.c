#include<stdio.h>
int main()
{
    int a[20],i,j,n,temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    printf("\n Array before sorting");
    for(i=1;i<=n;i++)
    printf("%d\t",a[i]);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
    }
    printf("\n \nArray after Sorting:");
    for(i=1;i<=n;i++)
    {
        printf("%d \t",a[i]);
    }
    return(0);
}