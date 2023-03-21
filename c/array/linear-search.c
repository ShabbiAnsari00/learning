#include <stdio.h>
int main(int argc, char const *argv[])  //O(n)
{
    int value, flag = 0, i;
    int arr[] = {1, 88, 5, 12, 78};
    printf("Enter a number: ");
    scanf("%d", &value);
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == value)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d found at index %d.\n", value, i);
    }
    else
    {
        printf("Not found!\n");
    }
    return 0;
}