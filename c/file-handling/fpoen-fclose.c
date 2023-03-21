#include <stdio.h>
int main (void)
{
    FILE *fp;
    fp=fopen("file1.txt", "w");
    if (fp==NULL)
    {
        printf("file can not open");
    }
    fclose(fp);
    return 0;
}