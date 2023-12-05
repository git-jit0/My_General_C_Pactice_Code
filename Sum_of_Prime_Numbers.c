#include<stdio.h>
int prime(int x)
{
    int i=x/2,k=x,flag=0;
    while(k!=1)
    {
        if (k%i==0)
            {
                flag=1;
            }
    }  

        if (flag==0)
        {
            return x;
        }
        else
            return 0;   
        k--;
}
int main()
{
    int n,sum=0;
    printf("ENter the number of term: ");
    scanf("%d",&n);
    int k=n;
    while(n!=0)
    {
        int m=prime(n);

        sum= sum+m;

        n--;
    }
    printf("The sum of prime numbers between %d and 0 is %d",k,sum);
    return 0;
}