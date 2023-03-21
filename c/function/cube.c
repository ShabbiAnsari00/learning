#include <stdio.h>
#include <stdlib.h>

int cube(int num);      //Function Declaration/Prototype

int main(void)
{
    int num, c;
    printf("Enter any number: ");
    scanf("%d", &num);
    c = cube(num);          //Function call
    printf("cube of %d is %d\n", num, c);
    return 0;
}

// ----------- Function Definition -----------------
int cube(int num)       //int - function/return type; cube - function name; int num - parameter
{
    int cu;     //local variable
    cu = num * num * num;      //function statement
    return cu;  //return statement
}