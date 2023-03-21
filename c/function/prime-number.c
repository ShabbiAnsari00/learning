#include <stdio.h>
#include "utility.h"

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<=1)
    {
        printf("%d is niether prime nor composite.\n", n);
    }

    if(factors_count(n) == 2)
        printf("%d is a prime number.\n", n);
    else   
        printf("%d is a composite number.\n", n);
    return 0;
}