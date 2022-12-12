#include <stdio.h>
int main(int argc, char *argv[])
{
    char c;
    FILE *fp;
    fp = fopen("first.txt", "w");
    printf("Type some text below:\n");
    while((c=getchar()) != EOF)
    {
        putc(c, fp);
    }
    fclose(fp);
    return 0;
}