#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[50];
    int len, flag = 1;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("%s is a pallindrome.\n", str);
    else
        printf("%s is not a pallindrome.\n", str);
    return 0;
}
