#include <stdio.h>
int main(void)
{
    int a[200], i ;
    printf("Enter a number: ");
    
    for(i=0;i<200;i++)
    scanf("%d", &a[i]);
    if(a[i]%2==0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
}