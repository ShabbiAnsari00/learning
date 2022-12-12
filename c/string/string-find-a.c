#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[20];
    int i, w;
    printf("Enter string: ");
    scanf("%[^\n]", str);
    for (i = 0; str[i] = '\0'; i++)
    {
        if (str[i] == 'a')
            w++;
    }
    printf("letter = %d", w - 1);
    return 0;
}