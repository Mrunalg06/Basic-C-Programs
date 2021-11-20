/******************************************************************************

REVERSE NUMBER

EG - 153 -----> 351

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, rev=0, rem=0;
    printf("Enter limit\n");
    scanf("%d", &n);
    
    while(n>0){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    printf("%d\n", rev);
    
    return 0;
}
