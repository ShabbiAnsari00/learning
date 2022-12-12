#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    while (str[i] != '\0')
    {
        i++;
    }
    printf("The string %s has %d characters.\n", str, i);
    return 0;
}
