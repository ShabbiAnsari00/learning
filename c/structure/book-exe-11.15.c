#include <stdio.h>
struct student
{
    char name[10];
    //float date;
    int marks[5];
};
int main(void)

{
    struct student stu;
    int i, sum = 0;
    float per;
    printf("Enter name: ");
    scanf("%[^\n]", stu.name);
    //printf("Enter current date: ");
    //scanf("%f", &stu.date);
    printf("Enter five subject marks\n");

    for (i = 0; i < 5; i++)
    {
        scanf("Enter marks = %d", &stu.marks[i]);
        sum += stu.marks[i];
    }
        per = (sum*100)/500;
    printf("Total marks %d\n", sum);
    printf("Total percentage is %f\n", per);
    printf("Student name is %s\n", stu.name);
   // printf("current date is %f\n", stu.date);
    for (i = 0; i < 5; i++)
    {
        printf("student marks is %d\n", stu.marks[i]);

    }
    
    return 0;
}
