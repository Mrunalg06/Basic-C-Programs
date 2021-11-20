/******************************************************************************

ARMSTRONG NUMBER 

ARMSTRONG NUMBER -  a number that is equal to the sum of cubes of its digits

EG - 153, 370, 371, 407

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, sum=0, rem, no;
    printf("Enter number\n");
    scanf("%d", &n);
    no=n;
    
    while(n>0){
        rem = n%10;
        sum = sum + (rem*rem*rem);
        n=n/10;
    }
    n=no;
    if(n==sum){
        printf("%d is an Armstrong number\n", n);
    }
    else{
        printf("%d is not an Armstrong number\n", n);
    }
    return 0;
}
