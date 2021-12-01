/******************************************************************************

CALCULATE THE POWER OF A NUMBER

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, p, result=1;
    printf("Enter number\n");
    scanf("%d", &num);
    printf("Enter Power\n");
    scanf ("%d", &p);
    
    int no=num;
    
    for(int i=1; i<=p; i++){
        result = result * num;
    }
    
    printf("%d^%d = %d\n", no, p, result);
    
    return 0;
}
