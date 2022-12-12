#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    FILE *fp;
    if(argc <= 1)
    {
        printf("Please give file name!\n");
        return 1;
    }

    fp = fopen(argv[1], "r");

    if(fp == NULL)
    {
        printf("File not found!\n");
        return 1;
    }

    printf("The text in the file is:\n");
    while((c=getc(fp)) != EOF)
    {
        putchar(c);
    }
    return 0;
}
