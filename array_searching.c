#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},i,n,m=0;

    printf("Enter the element to seach: ");
    scanf("%d",&n);
    int size= sizeof(arr)/ sizeof(arr[0]);
    for(i=0;i<size;i++)
    {
        if(n==arr[i])
            printf("\nitem found! at index %d ",m);  
        m++;
    }
    return 0;
    
}