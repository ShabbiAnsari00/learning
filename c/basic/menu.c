#include <stdio.h>
int main (void)
{
    int ch, qty;
    printf("\n1.coffee            Rs:15");
    printf("\n2.Tea               Rs:10");
    printf("\n3.cold coffee       Rs:25");
    printf("\n4.milk shake        Rs:50");
    printf("\nENter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1: 
        printf("you have selected coffee\n");
        printf("Enter the qty: \n");
        scanf("%d", &qty);
        printf("total amount is = %d", (qty*15));
        break;

    case 2:
        printf("you have selected tea\n");
        printf("Enter the qty: \n");
        scanf("%d", &qty);
        printf("total amount is = %d\n", (qty*10));
        break;
    case 3:
        printf("you ahve selected cold coffee\n");
        printf("enter the qty: \n");
        scanf("%d", &qty);
        printf("total amount is = %d\n", (qty*25));
        break;
    case 4:
        printf("you have selected mike shake\n");
        printf("enter a qty: \n");
        scanf("%d", &qty);
        printf("total amount is = %d\n", (qty*50));
        break;
    default:
        printf("try agian!\n");
        break;
    }
    return 0;
}