#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
            printf("Greatest number is : %d/n", num1);
        else
            printf("Greatest number is : %d\n", num3);
    }
    else
    {
        if (num3 > num2)
            printf("Greatest number is : %d\n", num3);
        else
            printf("Greatest number is : %d\n", num2);
    }
    return 0;
}