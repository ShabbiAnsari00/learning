#include <stdio.h>
#include <string.h>

#define MAX 3

int main(void)
{
    int i, j, temp, g;
    char name[MAX][20], team[MAX][10];
    float avg[MAX];
    printf("Enter the details of %d\n", MAX);
    for (i = 0; i < MAX; i++)
    {
        printf("\nPlayer name: ");
        scanf("%[^\n]%*c", name[i]);
        printf("Team name: ");
        scanf("%[^\n]", team[i]);
        printf("Batting average: ");
        scanf("%f%*c", &avg[i]);
    }

    for (int a = 0; a < MAX; a++)
    {
        for (int b = 0; b < MAX - 1; b++)
        {
            if (avg[b] < avg[b + 1])
            {
                temp = avg[b];
                avg[b] = avg[b + 1];
                avg[b + 1] = temp;

                char temp_name[20];
                strcpy(temp_name, name[b]);
                strcpy(name[b], name[b + 1]);
                strcpy(name[b + 1], temp_name);

                char temp_team[10];
                strcpy(temp_team, team[b]);
                strcpy(team[b], team[b + 1]);
                strcpy(team[b + 1], temp_team);
            }
        }
    }

    printf("\nThe players details are as follows:\n");
    for (j = 0; j < MAX; j++)
    {
        printf("Player Name: %s\n", name[j]);
        printf("Team Name %s\n", team[j]);
        printf("Batting Average %1.2f\n\n", avg[j]);
    }
}