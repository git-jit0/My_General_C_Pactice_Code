#include <stdio.h>
void swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
} 
int main()
{
    int a, b;
    printf("\nEnter value of a & b: ");
    scanf("%d%d", &a, &b);
    
    swap(&a, &b);
    printf("\nAfter Swapping:\n");
    printf("\n %d %d", a, b);
    return 0;
}
