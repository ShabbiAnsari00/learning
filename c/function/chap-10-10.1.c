#include <stdio.h>
void printline(void);
void value(void);
int main()
{
    printline();
    value();
    printline();
    /*Functionl 1 : printline()*/
}

void printline(void)
{
    int i;
    for (i = 1; i <= 35; i++)
    {
        printf("%c", '_');
    }
    printf("\n");
}

void value(void)
{
    int year, period;
    float inrate, sum, principal;

    printf("Principal amount: ");
    scanf("%f", &principal);
    printf("Interest rate: ");
    scanf("%f", &inrate);
    printf("period: ");
    scanf("%d", &period);

    sum = principal;
    year = 1;

    while (year <= period)
    {
        sum = sum * (1 + inrate/100.0f); /*define*/
        year++;
    }
    printf("\n%1.2f\n%1.2f\n%d\n%1.2f\n", principal, inrate, period, sum);
}