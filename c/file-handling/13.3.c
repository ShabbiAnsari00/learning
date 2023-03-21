#include <stdio.h>
int main (void)
{
    FILE *fp;
    int number, qty, i;
    float value , price;
    char item[10], filename[10];
    printf("Input file name\n");
    scanf("%[^\n]", filename);
    fp = fopen(filename, "w");
    printf("input inventory data\n");
    printf("Item name   Number  price  Quantity\n");
    for(i=1; i<=3; i++)
    {
        fscanf("stdin,%[^\n] %d %f %d",item, &number, &price, &qty);
        fprintf(fp, "%[^\n] %d %.2f %d", item ,number , price , qty);
    }
    fclose(fp);
    fprintf(stdout,"\n\n");
    fp = fopen(filename, "r");

    printf("Item name  Number  Price  Quantity  Value\n");
    for(i=1; i<=3; i++)
    {
        fscanf(fp, "%[^\n] %d %f %d", item,&number,&price, &qty );
        value = price * qty;
        fprintf(stdout, "%-8s %7d %8.2f %8d %11.2f\n", item, number, price, qty, value);
    }
    fclose(fp);
}