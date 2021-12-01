/******************************************************************************

RETURN QUOTIENT AND REMAINDER

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d", &num);
    
    if(num > 0){
        printf("%d is a Positive number\n", num);
    }
    else if (num == 0){
        printf("%d is neither Positive nor Negative\n", num);
    }
    else{
        printf("%d is a Negative number\n", num);
    }
    
    return 0;
}
