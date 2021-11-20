/******************************************************************************

SWAP NUMBERS WITHOUT USING THIRD VARIABLE

EG - 52 26 ----> 26 52

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("%d %d\n", a,b);
    
    return 0;
}
