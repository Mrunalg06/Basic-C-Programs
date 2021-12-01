/******************************************************************************

FACTORS OF A NUMBER

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, factor=0;
    printf("Enter number\n");
    scanf("%d", &num);
    
    printf("Factors of %d are : \n",num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d ",i);
        }
    }
    
    return 0;
}
