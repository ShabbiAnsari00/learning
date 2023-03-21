#include <stdio.h>
#define MAX 3

struct cricket
{
    char player_name[50];
    char team_name[50];
    float batting_average;
};

struct cricket player[MAX];

void read();
void sort();
void print();

int main(int argc, char const *argv[])
{
    read();
    printf("\nUNSORTED LIST\n");
    print();
    sort();
    printf("\nSORTED LIST\n");
    print();
    return 0;
}

void read()
{
    printf("Enter the details of %d players:\n", MAX);
    for (int i = 0; i < MAX; i++)
    {
        printf("\nPlayer Name: ");
        scanf("%[^\n]%*c", player[i].player_name);
        printf("Team Name: ");
        scanf("%[^\n]", player[i].team_name);
        printf("Batting Average: ");
        scanf("%f%*c", &player[i].batting_average);
    }
}

void sort()
{
    for (int i = 0; i < MAX - 1; i++)
    {
        for (int j = i + 1; j < MAX; j++)
        {
            if(player[i].batting_average < player[j].batting_average)
            {
                struct cricket temp = player[i];
                player[i] = player[j];
                player[j] = temp;
            }
        }
    }
}

void print()
{
    printf("\nThe players details are as follows:\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("\nPlayer Name: %s\n", player[i].player_name);
        printf("Team Name: %s\n", player[i].team_name);
        printf("Batting Average: %1.1f\n", player[i].batting_average);
    }
}