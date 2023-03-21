#include <stdio.h>
#define MAX 10

int sorted = 0; // 0-unsorted, 1-sorted
void display(int *arr, int size);
void insert(int *arr, int *size);
void delete(int *size);
void sort(int *arr, int *size);
void search(int *arr, int *size);

int main(int argc, char const *argv[])
{
    int arr[MAX], size = 0, ch;
    while (1)
    {
        printf("\nMAIN MENU\n");
        printf("1. Display (Traversal)\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Sort\n");
        printf("5. Search\n");
        printf("6. Merge\n");
        printf("Enter your choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("\nBye");
            return 0;
        case 1:
            display(arr, size);
            break;
        case 2:
            insert(arr, &size);
            break;
        case 3:
            delete (&size);
            break;
        case 4:
            sort(arr, &size);
            break;
        case 5:
            search(arr, &size);
            break;
        default:
            printf("\n\nInvalid Option!\n");
        }
    }
    return 0;
}

void display(int *arr, int const size)
{
    if (size == 0)
    {
        printf("\n\nArray empty. Nothing to display.\n");
        return;
    }

    printf("\nThe elements of array are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\nEnd of array\n");
}

void insert(int *arr, int *size)
{
    if (*size >= MAX)
    {
        printf("\n\nArray is full. Cannot insert anymore.\n");
        return;
    }

    printf("\nEnter a value: ");
    scanf("%d", &arr[*size]);
    printf("\n\nElement inserted!\n");
    (*size)++;
    sorted = 0;
}
void delete(int *size)
{
    (*size)--;
    printf("\n\nElement deleted!\n");
}

void sort(int *arr, int *size)
{
    for (int i = 0; i < *size - 1; i++)
    {
        for (int j = i + 1; j < *size; j++)
        {
            if (arr[i] > arr[j])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    sorted = 1;
    printf("\n\nList sorted!\n");
}

void search(int *arr, int *size)
{
    int val;
    printf("\nEnter a value: ");
    scanf("%d", &val);
    if (sorted == 0)
    {
        for (int i = 0; i < *size; i++)
        {
            if (arr[i] == val)
            {
                printf("%d found at %d.\n", val, i);
                break;
            }
        }
    }
    else
    {
        int lb = 0, ub = *size - 1, mid;

        while (lb <= ub)
        {
            mid = (ub + lb) / 2;

            if (arr[mid] == val)
            {
                printf("%d found at %d.\n", val, mid);
                break;
            }
            else if (arr[mid] > val)
            {
                ub = mid - 1;
            }
            else
            {
                lb = mid + 1;
            }
        }
    }

    printf("\n\nSearch Complete!\n");
}
int display(int )