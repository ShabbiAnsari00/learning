#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[40];
    printf("Enter your full name:");
    scanf("%[^\n]", str1);
    // gets(str1);
    // fgets(str1, 40, stdin);
    printf("Length of string is %ld\n", strlen(str1));
    return 0;
}