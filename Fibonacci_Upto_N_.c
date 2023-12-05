#include<stdio.h>
int main(){

       int n,t0=0,t1=1,t2;
       printf("Enter the nth term: ");
       scanf("%d",&n);

       if(n==0)
        printf("The 0th term is: 0");
       else if(n==1)
        printf("The 1st term is : 1");
       else
       {
        for(int i=0 ;i<n;i++)
        {
            t2=t0+t1;
            t0=t1;
            t1=t2;
        }

        printf("The %d th fibonacci number is : %d",n,t2);
       }
   
    return 0;
}
