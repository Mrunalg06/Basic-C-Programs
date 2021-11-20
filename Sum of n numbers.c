/******************************************************************************

SUM OF NUMBERS TILL LIMIT

EG - 5 ---> 1+2+3+4+35=15

*******************************************************************************/
#include <stdio.h>

int main()
{
    int limit, sum=0;
    printf("Enter limit\n");
    scanf("%d", &limit);
    
    for (int i=1 ; i<=limit ; i++){
        sum = sum + i;
    }
    
    printf("%d\n", sum);
    
    return 0;
}
