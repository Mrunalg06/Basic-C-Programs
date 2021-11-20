/******************************************************************************

TO CHECK WHETHER THE NUMBER IS PRIME OR NOT

PRIME NUMBER - A NUMBER WHICH IS DIVISIBLE BY 1 AND ITSELF AND HAS ONLY TWO FACTORS.

EG - 1,2,3,5,7,11,13...

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i, count=0;
    printf("Enter number\n");
    scanf("%d", &n);
    
    for (i=1;i<=n;i++){
        if(n%i==0){
            count++; // count counts the number of factors 
        }
    }
    if (count==2){
        printf("%d is a Prime Number\n", n);
    }
    else{
        printf("%d is not a Prime Number\n", n);
    }
}
