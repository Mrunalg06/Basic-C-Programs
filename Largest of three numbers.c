/******************************************************************************

LARGEST OF THREE NUMBERS

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers\n\n");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>b){
        if(a>c){
            printf("%d is Greatest\n", a);
        }
        else{
            printf("%d is Greatest\n", c);
        }
    }
    else{
        if(b>c){
            printf("%d is Greatest\n", b);
        }
        else{
            printf("%d is Greatest\n", c);
        }
    }
    
    return 0;
}
