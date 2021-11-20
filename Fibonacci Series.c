/******************************************************************************

FIBONACCI SERIES - A SERIES OF NUMBERS IN WHICH THE NEXT NUMBER IS THE SUM OF 
TWO PREVIOUS NUMBERS

O/P = 0,1,1,2,3,5,8,13,21.....

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, a=0, b=1, sum=0;
    printf("Enter Limit of a fibonacci series\n");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++)
    {
        printf("%d\t", a);
        sum=a+b;
        a=b;
        b=sum;
    }

    return 0;
}
