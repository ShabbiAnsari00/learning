#include <stdio.h>
#include <string.h>
int main(void)
{
    char chk = 't', str[30];
    int len, left, right;
    printf("Enter a strinh: \n");
    scanf("%s", str);
    len = strlen(str);
    right = len - 1;
    whiel(left < right && chk == 't')
    {
        if (!(str[left] == str[right]))
            chk = 'f';
        left++;
        right--;
    }
    if (chk == 't')
        printf("The string %s is palindrome\n", str);

    else 
        printf("The string %s is not a palindrome\n", str);

    return 0;
}