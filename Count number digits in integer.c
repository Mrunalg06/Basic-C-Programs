/******************************************************************************

COUNT NUMBER OF DIGITS IN A NUMBER 

EG : 5 DIGITS IN 15236

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, q=0;
    printf("Enter number\n");
    scanf("%d", &num);
    
    int no=num;
    
    while(num>0){
        num=num/10;
        q++;
    }
    
    printf("%d digits present in %d\n", q,no);
    return 0;
}
