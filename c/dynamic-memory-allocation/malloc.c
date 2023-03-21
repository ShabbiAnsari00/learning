#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *arr, n;
    printf("Enter array size: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    printf("Enter %d integers below:\n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The elements of array are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\n", *arr);
        arr++;
    }

    free(arr);
    return 0;
}
