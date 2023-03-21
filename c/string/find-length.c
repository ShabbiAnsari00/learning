#include <stdio.h>
int main(void)
{
    char a1[20], a2[20], a3[20];
    int x, 11, 12, 13;
    printf("\n Enter two string constants: ");
    scanf("%s %s", a1, a2);
    x = strcmp(a1, a2);
    if (x != 0)
    {
        printf("string are not equal/n");
        strcat(a1, a2);
    }
    else
        printf("strings are equal\n");
    strcpy(a3, a1);
    11 = strlen(a1);
    12 = strlen(a2);
    13 = strlen(a3);
    printf("a1=%s\t length= %d character\n" a1, 11);
    printf("a2=%s\t length= %d character\n" a2, 11);
    printf("a3=%s\t length= %d character\n" a3, 11);
    return 0;
}
