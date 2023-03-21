#include <stdio.h>
int main(void)
{
    int n, f;
    printf("Enter a number: ");
    scanf("%d, &n");
    f = factroial(n);
    printf("he factorial of %d is %d", n, f);
    return 0;
}
int factroial(int n)
{
    int f;
    if (n == 1)
        return 1;
    f = n * factroial(n - 1);
    return f;
}