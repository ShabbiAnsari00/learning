#include <stdio.h>
int main (void)
{
    int a, b, temp,c;
    printf("Enter value: ");
    scanf("%d", &a);
    printf("Enter another value: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("after the value is = %d %d", b,temp);
}