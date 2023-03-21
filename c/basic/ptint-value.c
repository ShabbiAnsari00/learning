#include <stdio.h>
int main ()
{
    int x=10;
    int  *pr;
    pr = &x;

    printf("address is x = %u\n", *&x);
    printf("address is p = %u\n", &pr);

    printf("address is x = %d\n", x);
    printf("address is p = %d\n", *pr);

    return 0;
}