/******************************************************************************

Printing perfect numbers in a range

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, limit, n, sum=0;
    printf("Enter limit\n");
    scanf("%d", &limit);
    
    for(n=1;n<limit; n++){
        sum=0;
        for (i=1; i<n; i++){
            if(n%i==0){
                sum=sum+i;
            }
        }
        if (n==sum){
            printf("%d\t", n);
        }
    }

    return 0;
}
