/******************************************************************************

MULTIPLICATION TABLE 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter Number for Multiplication table\n");
    scanf("%d", &num);
    
    for (i=1; i<=10; i++){
        printf("%d * %d = %d\n", num, i, num*i);
    }

    return 0;
}
