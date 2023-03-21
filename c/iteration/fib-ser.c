#include <stdio.h>
int main (void)
{
    int a=0, b=1, c, n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d\t%d", a, b);
    for(int i = 3; i<=n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("\t%d", c);          // 2.0,   3.5 ques
    }
    printf("\n");
    
    return 0;
}