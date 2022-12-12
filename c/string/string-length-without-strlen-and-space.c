#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str[100];
    int i = 0, count = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    while (str[i] != '\0')
    {
        i++;
        if (str[i] == ' ')
            continue;
        count++;
    }
    printf("The string %s has %d characters (without spaces).\n", str, count);
    return 0;
}
