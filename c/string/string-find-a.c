#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[20];
    int i, a = 0;
    printf("Enter string: ");
    scanf("%[^\n]", str);
    while (str[i] != '\0')
    {
        if (tolower(str[i]) == 'a')
            a++;

        i++;
    }

    printf("There %s %d occurence(s) of a.\n", (a == 1) ? "is" : "are", a);

    return 0;
}