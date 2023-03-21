#include <stdio.h>
int main(void)
{
    int i, n, factors = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n <= 1)
    {
        printf("%d is not a prime number or a composite number.\n", n);
        return 0;
    }

    for (i = 1; i <= n; i++)     //loop to count factors
    {
        if(n % i == 0)
        {
            factors++;
        }
    }

    if(factors == 2)
        printf("%d is a prime number\n", n);
    else
        printf("%d is a composite number\n", n);

    return 0;
}
