#include <stdio.h>
#include <string.h>
#define SIZE 2
struct census
{
    char city[50];
    long int population;
    float literacy_level;
};

struct census cen[SIZE]; // global declaration

void read();
void sort_alphabetically();
void sort_literacy_level();
void sort_population();
void display();
void printline(int n);

int main(int argc, char const *argv[])
{
    printf("\n---------------------- CENSUS PROGRAM -------------------\n\n");
    printf("Enter details of %d cities below:\n", SIZE);
    read();
    printf("\n---------------------- Original Data ---------------------\n");
    display();
    printf("\n---------------------- Sort Alphabetically ---------------------\n");
    sort_alphabetically();
    display();
    printf("\n---------------------- Sort Literacy-level-wise ---------------------\n");
    sort_literacy_level();
    display();
    printf("\n\n---------------------- END OF CENSUS PROGRAM -------------------\n");
    return 0;
}

void read()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d:\n", i + 1);
        printf("City: ");
        scanf("%[^\n]", cen[i].city);
        printf("Population: ");
        scanf("%ld", &cen[i].population);
        printf("Literacy Level: ");
        scanf("%f%*c", &cen[i].literacy_level);
        printf("\n");
    }
}

void sort_alphabetically() // Selection sort
{
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if(strcmp(cen[i].city, cen[j].city) > 0)
            {
                struct census t = cen[i];
                cen[i] = cen[j];
                cen[j] = t;
            }
        }
    }
}

void sort_literacy_level() // Bubble sort
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE - 1; j++)
        {
            if (cen[j].literacy_level < cen[j + 1].literacy_level)
            {
                struct census t = cen[j];
                cen[j] = cen[j + 1];
                cen[j + 1] = t;
            }
        }
    }
}

void sort_population()      //Insertion sort
{
 for(int i =0;)
}

void display()
{
    printline(60);
    printf("%-20s%20s%20s\n", "City", "Population", "Literacy Level");
    printline(60);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%-20s%20ld%20.2f\n", cen[i].city, cen[i].population, cen[i].literacy_level);
    }
    printline(60);
}

void printline(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("-");
    }
    printf("\n");
}