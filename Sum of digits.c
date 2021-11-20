/******************************************************************************

SUM OF DIGITS

EG - 123 = 1+2+3 = 6

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, sum=0, rem;
    printf("Enter number\n");
    scanf("%d", &n);
    
    while (n>0){
        rem = n%10;
        sum = sum+rem;
        n = n/10;
    }
    printf("%d\n", sum);
    
    return 0;
}
