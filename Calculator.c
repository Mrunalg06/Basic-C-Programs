/******************************************************************************

CALCULATOR WITH OPERATIONS ADD, SUBTRACTION, MULTIPLY, DIVISION  

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, op, result;
    printf("Enter two numbers\n\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    
    printf("\nEnter operation\n\n1.ADD\t2.SUBTRACT\t3.MULTIPLY\t4.DIVIDE\n\n");
    scanf("%d", &op);
    
    switch(op){
        case 1:
        result=a+b;
        printf("\na + b = %d\n", result);
        break;
        
        case 2:
        if(a>b){
            result=a-b;
            printf("\na - b = %d\n", result);
        }
        else{
            result=b-a;
            printf("\nb - a = %d\n", result);
        }
        break;
        
        case 3:
        result=a*b;
        printf("\na * b = %d\n", result);
        break;
        
        case 4:
        if(a>b){
            result=a/b;
            printf("\na / b = %d\n", result);
        }
        else{
            result=b/a;
            printf("\nb / a = %d\n", result);
        }
        break;
        
        default:
        printf("\nInvalid selection\n");
    }
    
    return 0;
}
