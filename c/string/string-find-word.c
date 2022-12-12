#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[20];
    int i, word;
    printf("Enter string: ");
    scanf("%[^\n]", str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
            word++;

        i++;
    }
    printf("Total words is = %d", word);
}