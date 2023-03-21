#include <stdio.h>
int main (void)
{
    int *p, sum , i;
    int x[5] = {5,6,9,7,3};
    i = 0;
    p = x;
    printf("element value address\n\n");
    while (i < 5 )
    {
        printf("x[%d] %d %p\n", i, *p, p);
        sum = sum + *p;
        i++,p++;
    }
    printf("sum = %d \n", sum);
    printf("&x[0] = %p\n", &x[0]);
    printf("p = %p\n", p);
    
}