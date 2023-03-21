#include <stdio.h>
int printline(void)
{
    for (int i = 0; i < 40; i++)
    {
        printf("-");
    }
    printf("\n");
}

int main(void)
{
    printline();
    printf("\"This program the use of \' c \' function\"\n");
    printline();
    return 0;
}