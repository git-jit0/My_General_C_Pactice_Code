// Input a number and check if it is a Krishnamurthy number.
#include<stdio.h>

long int fact(int n)    // factorial function
{
    int res=1;
    while (n!=0)
    {
     res=res*n;      
     --n; 
    }
    return res;   
}

int main()

{
    int n;  int k ,num=0;
    printf("Enter the number: ");     // inputs number
    scanf("%d",&n);       
        k=n;     //puts the number in different container for post checking
    
    while(n!=0)         // this part checks the criteria to be krishnamurti
    {
        int a=  n%10;
        int b=fact(a);
        n=n/10;
        num=num+b;
    }

    if(num==k)          // checking the new number and old to match
        printf("\nNumber is krishnamurti number");
    else
        printf("\nNumber is not a krishnamurti number");

    return 0;
}