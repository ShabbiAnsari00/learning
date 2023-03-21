#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[20];
    int i, word = 1;
    printf("Enter string: ");
    scanf("%[^\n]", str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            if (str[i + 1] != '\0')         //Validation (Bug fixing)
                word++;
        }
        i++;
    }
    printf("Total words is = %d\n", word);
}