#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[100];
    int i = 0, vo = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    while (str[i] != '\0')
    {
        if (toupper(str[i]) == 'A' || toupper(str[i]) == 'E' || toupper(str[i]) == 'I' || toupper(str[i]) == 'O' || toupper(str[i]) == 'U')
            vo++;

        i++;
    }
    printf("vowel is = %d\n", vo);

    return 0;
}