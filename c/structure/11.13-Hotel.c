#include <stdio.h>
#include <stdio.h>
#define MAX 3
struct hotel
{
    char name[50];
    char address[50];
    int grade_no;
    float ave_room_charge;
    int number_room;
};

void new_hotel(struct hotel *h);
void display(struct hotel *h, int size);
void search_hotel(struct hotel *h, int grade, struct hotel *result, int *size);
void sort_hotel_room_charge(struct hotel *result, int size);
void list_under_hotel(struct hotel *h, int grade, struct hotel *result, int *size);
void list_selected_hotels(struct hotel *result, int size);

int main(int argc, char const *argv[])
{
    struct hotel h[MAX], result[MAX];
    int size, grade, a;
    //printf("The size of main.h is %ld bytes.\n", sizeof(h));

   // printf("Input test values:\n\n");
    new_hotel(h);

    //-------------- section a --------------------------
    printf("Testing section a :\n\n");
    printf("Enter grade: ");
    scanf("%d", &grade);
    search_hotel(h, grade, result, &size);
    sort_hotel_room_charge(result, size);
    display(result, size);

    // ----------------- section b -------------------------
    printf("Enter your amount: ");
    scanf("%d", &a);
    list_under_hotel(h, grade, result, &size);
    list_selected_hotels(result, size);
    return 0;
}

void new_hotel(struct hotel *h)
{
    for (int i = 0; i < MAX; i++)
    {
       // printf("The size of new_hotel.h is %ld bytesr.\n", sizeof(h));
        printf("Enter details of a hotel:\n");
        printf("Name: ");
        scanf("%[^\n]%*c", h[i].name);
        printf("Address: ");
        scanf("%[^\n]", h[i].address);
        printf("Grade No: ");
        scanf("%d", &h[i].grade_no);
        printf("Average room charge: ");
        scanf("%f", &h[i].ave_room_charge);
        printf("Number of rooms: ");
        scanf("%d%*c", &h[i].number_room);
    }
}

void display(struct hotel *h, int size)
{
    printf("%-50s%-30s%-10s%-25s%-20s\n", "Hotel Name", "Address", "Grade", "Average Room Charge", "Number of Rooms");
    for (int i = 0; i < size; i++)
    {
        printf("%-50s%-30s%-10d%-25.2f%-20d\n", h[i].name, h[i].address, h[i].grade_no, h[i].ave_room_charge, h[i].number_room);
    }
}

void search_hotel(struct hotel *h, int grade, struct hotel *result, int *size)
{
    int i, flag = 0;
    *size = 0;
    for (i = 0; i < MAX; i++)
    {
        if (grade == h[i].grade_no)
        {
            result[*size] = h[i];
            (*size)++;
        }
    }
}

void sort_hotel_room_charge(struct hotel *result, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (result[i].ave_room_charge > result[j].ave_room_charge)
            {
                struct hotel t = result[i];
                result[i] = result[j];
                result[j] = t;
            }
        }
    }
}

void list_under_hotel(struct hotel *h, int grade, struct hotel *result, int *size)
{
    int i, flag = 0;
    *size = 0;
    for (i = 0; i < MAX; i++)
    {
        if (grade <= h[i].grade_no)
        {
            result[*size] = h[i];
            (*size)++;
        }
    }
}
void list_selected_hotels(struct hotel *result, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (result[i].ave_room_charge > result[j].ave_room_charge)
            {
                struct hotel t = result[i];
                result[i] = result[j];
                result[j] = t;
            }
        }
    }
}