/******************************************************************************

RETURN QUOTIENT AND REMAINDER

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,divi, quo=0, rem=0;
    printf("Enter number to be divided\n");
    scanf("%d", &num);
    printf("Enter divisor\n");
    scanf("%d", &divi);
    
    quo=num/divi;
    rem=num%divi;
    
    printf("Results are : \nQuotient = %d\nRemainder = %d\n", quo, rem);

    return 0;
}
