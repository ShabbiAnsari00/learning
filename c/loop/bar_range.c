#include <stdio.h>
#define N 5
int main (void)
{
    int value [N];
    int j, i, n, x;
    for(n=0; n<N; n++)
    {
        printf("Enter employes in group - %d: ", n+1);
        scanf("%d", &x);
        value[n] = x;					//unnecessary
        printf("%d\n", value [n]);		//not important
    }
    printf("\n");
    //printf("|\n");
    
    for(n = 0;n < N; n++)
    {
        for(i=1; i<=value[n]; i++)
        {
            /* if(i == 2)
            printf("group - %ld |", n+1);
            else 
            printf("|");
            for (j=1; j<=value[n]; ++j);
            printf("*");
            if (i == 2)
            printf("%d\n", value[n]);
            else 
            printf("\n"); */
            
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
