#include <stdio.h>
int main(void)
{
    int  marks, index;
    char grade;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    index = marks / 10;
    switch (index)
    {
    case 10:
    case 9:
    case 8:
        grade = 'h';
        break;
    case 7:
    case 6:
        grade = '1';
        break;
    case 5:
        grade = '2';
        break;
    case 4:
        grade = '3';
        break;
    default:
        grade = 'F';
        break;
    }
    printf("%c\n", grade);
    
}