/******************************************************************************

PERFECT NUMBER OR NOT 

PERFECT NUMBER = a positive integer that is equal to the sum of its proper divisors

EG = 6 = 1+2+3 , 28 , 496

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, sum=0;
    printf("Enter Number\n");
    scanf("%d", &n);
    
    for (int i=1; i<n; i++){
        if(n%i==0){             // gives factor
            sum=sum+i;          // adds factor
        }
    }
    if(sum==n){
        printf("%d is a perfect number\n", n);
    }
    else{
        printf("%d is not a perfect number\n", n);
    }

    return 0;
}
