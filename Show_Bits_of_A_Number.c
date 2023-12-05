#include<stdio.h>
int main()
{
    int a; 
    int c,i;
    int n;
    printf("Enter the number: ");
    scanf("%d",&a);
    

    // SHOW BITS OF A NUMBER 
     
    printf("\nThe binary representation is: ");  
    for(i=10;i>=0;i--)
    {
        c=1<<i;
       int m= a&c?printf("1"):printf("0");
    }


    return 0;
}