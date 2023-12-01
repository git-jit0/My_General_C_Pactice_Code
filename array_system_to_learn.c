#include<stdio.h>
#include<stdlib.h>
#include <stdint.h>
void sort( int arr[] , int size)
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
        }
    }
}
void reverse( int arr[], int size )
{
        int start = 0;
        int end = size - 1;

        while (start < end) 
            {
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
    
}
int search( int arr[], int size, int number )
{
    int index=0;
    for(int i=0;i<size;i++)
    {
        if(number==arr[i])
            return index;
        index++;
    }
    return -1;
}
int search_address( int arr[],int size, int number )
{
   uintptr_t address;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==number)
            address = (uintptr_t)&arr[i];
        else
            address=-1;
        return address;    
    }

}
int main()
{
    int arr[1000] ;
    int choice , end , size ;
    char specifier ; 

    printf("\n\n_________________This array system has 1000 elements limit_________________");

do{
    printf("\n\n-> Enter the number of elements you want to have \n-> ");
    scanf("%d",&size);
    printf("\n->Enter the elements\n");
    for(int i=0; i<=size-1;i++)
    {   
        printf("-> ");
        scanf("%d",&arr[i]);      
    }

    printf("\n\n_____________Enter Your Choice_____________\n\n");
    printf("-> sort the array                     >>>> 1\n");
    printf("-> reverse the array                  >>>> 2\n");
    printf("-> search an element                  >>>> 3\n");
    printf("-> search the address of element      >>>> 4\n");
    printf("-> Enter elements again:              >>>> 5\n-> ");
    scanf("%d",&choice);

        if(choice==5)
            end=1;
        else
            printf("\n_________________RESULT_____________________\n\n");

    switch(choice)
    {
        case 1: // sort
        {
            sort(arr,size);
            printf("\n-> The sorted array\n-> ");
            for(int i=0;i<size;i++)  
            {
                printf("%d ",arr[i]);
            } 
        }   break;


        case 2: //reverse
        {
                reverse(arr,size);
                printf("->the reversed array\n-> ");
                for(int i=0;i<size;i++)
                    printf("%5d",arr[i]);
        }   break;


        case 3: //search
        {
            int number;
            printf("-> Enter the element to search in array\n-> ");
            scanf("%d",&number);
            int index= search(arr, size, number);
            if(index==-1)
                printf("\n\n-> Number not found!.....");
            else
                printf("-> The number was found at index\n-> %d",index);
        }   break;


        case 4: // search address in memory 
        {
            int number;
            printf("-> Enter number to find address\n-> ");
            scanf("%d",&number);
            int m=search_address(arr,size,number);
            if(m==-1)
                printf("\n->The number was not found!.......");
            else
                printf("\n____number_____address_____\n     %p         %d",m,number);
        }   break;


        case 5: // nothing here
        {

        }   break;


        default:
        {
            printf("-> wrong choice!!!\n-> Do you want to start over?(Y/N)\n-> ");
            scanf("%c",&specifier);
                if(specifier=='Y'||specifier=='y')
                    end=1;
                else
                    end=0;
        } 

    }

    printf("\n\n->Do you want to continue?(Y/N)\n-> ");
    scanf(" %c",&specifier);
        if(specifier=='Y'||specifier=='y')
                end=1;
        else    
                end=0;

}while(end);
    return 0;
}
