#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, y, z;
    int *a = &x, *b = &y, *c = &z;
    printf("Enter a number: ");
    scanf("%d", a);
    printf("Enter another number: ");
    scanf("%d", b);
    *c = *a + *b;
    printf("The sum is %d.\n", *c);
    return 0;
}
