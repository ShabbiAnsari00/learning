#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char ans[50];
    for (int i = 1; i <= 3; i++)
    {
        printf("Q. Who is the inventor of C Lanugage?\n");
        printf("A. ");
        scanf("%[^\n]%*c", ans);
        int j=0;
        while(ans[j] != '\0')
        {
            ans[j] = toupper(ans[j]);
            j++;
        }

        if (strcmp(ans, "DENNIS RITCHIE") == 0)
        {
            printf("Very Good!\n");
            break;
        }
        else
        {
            if(i==3)
            {
                printf("All of your attempts have been exhausted. The correct answer is 'Dennis Ritchie'\n");
            }
            else
            {
                printf("Try again!\n");
            }
        }
    }
    return 0;
}