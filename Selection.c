#include<stdio.h>
int smallest(int arr[],int k,int n);
int selection_sort(int arr[],int n);
int main()
{
    int arr[25],i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\nThe array before sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
        selection_sort(arr,n);
        printf("\n \nArray after sorting:");
        for(i=0;i<n;i++)
        {
        printf("%d\t",arr[i]);
        }
}
int smallest(int arr[],int k,int n)
{
    int small,j,pos;
    small=arr[k];
    pos=k;
    for(j=k+1;j<n;j++)
    {
        if(arr[j]<small)
        {
            small=arr[j];
            pos=j;
        }
        
    } 
    return pos;
}
int selection_sort(int arr[],int n)
{
    int k,pos,temp;
    for(k=0;k<n;k++)
    {
        pos= smallest(arr,k,n);
        temp=arr[k];
        arr[k]=arr[pos];
        arr[pos]=temp;
    }
    return(0);
}