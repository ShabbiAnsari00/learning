#include <stdio.h>
int main ()
{
    char name[20];
    char mobile[10];

    printf("Enter your name: ");
    gets(name);
    printf("Enter your mobile number: ");
    gets (mobile);

    puts(name);
    puts(mobile);
    return 0;
}