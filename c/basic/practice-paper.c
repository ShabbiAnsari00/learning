#include <stdio.h>

int display(int *arr, int size);

int main(int argc, char const *argv[])
{
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int arr3[10];
    int i;
    for (i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i];
    }

    for (int j = 0; j < 5; j++)
    {
        arr3[i] = arr2[j];
        i++;
    }
    printf("\nThe contents of first array are:\n");
    display(arr1, 5);
    printf("\nThe contents of second array are:\n");
    display(arr2, 5);
    printf("\nThe contents of merged array are:\n");
    display(arr3, 10);
    return 0;
}

int display(int *arr, int size)
{
    for (int j = 0; j < size; j++)
    {
        printf("%d\n", arr[j]);
    }
    return 0;
}