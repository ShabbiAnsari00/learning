#include <stdio.h>
int main (void)
{
    int c, d;
    char string [] = "cprogramming";
    printf("__________________\n");
    for(c = 0; c<= 1; c++)
    {
        d = c + 1;
        printf("|%-12.*s|\n", d,string);
    }
    printf("|-----------------|\n");
    for( c = 11;c>=0;c--)
    {
        d = c + 1;
        printf("|%-12.*s|\n", d, string);
    }
    printf("_____________\n");

    return 0;
}