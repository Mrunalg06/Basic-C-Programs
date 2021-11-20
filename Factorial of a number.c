/******************************************************************************

FACTORIAL OF A GIVEN NUMBER

FACTORIAL - the function that multiplies the number by every natural number below it

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, fact=1;
    printf("Enter Number\n");
    scanf("%d", &num);
    
    for (int i=1; i<=num; i++){
        fact = fact*(i);
    }
    printf("%d\n", fact);

    return 0;
}
