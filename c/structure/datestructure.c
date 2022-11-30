#include <stdio.h>
struct date
{
    int d;
    int m;
    int y;   
};

int main()
{
    struct date today,d1;
    today.d=26;
    today.m=7;
    today.y=2019;
    d1 = today;
    // printf("Enter today'sdate: ");
    // scanf("%d/%d/%d", &d1.d,&d1.m,&d1.y);
    printf("Date: %d/%d/%d\n", d1.d,d1.m,d1.y);
    return 0;
}