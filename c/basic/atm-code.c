#include <stdio.h>
int main()
{
    float a, b;
    char ch;
    printf("Enter yout Opening Amount: \n");
    scanf("%f%*c", &b);
    
    printf("c for credit\nd for debit\nb for balance\n");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'c':
        printf("Enter your amount: \n");
        scanf("%f", &a);
        b = b + a;
        printf("your amount is = %f\n", b);
        break;

    case 'd':
        printf("Enter your amount: \n");
        scanf("%f", &a);
        if (b >= a)
        {
            b = b - a;
            printf("Your amount is = %f\n", b);
        }
        else
        {
            printf("insufficient amount in your bank account\n");
        }
        break;

    case 'b':
        printf("your balance amount is = %f\n", b);
       break;
    default:
        printf("Please choose your correct option\n");
    }
    return 0;
}