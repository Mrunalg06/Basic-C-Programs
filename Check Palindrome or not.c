/******************************************************************************

CHECK PALINDROME OR NOT 

PALINDROME NUMBER = is a number that remains the same when its digits are reversed

Eg = 121, 4554, 2558552

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, rev=0, rem=0;
    printf("Enter number\n");
    scanf("%d", &num);      //121
    
    int n=num;
    
    while(n>0){
        rem = n%10;     //1 ----> 2 ----> 1
        rev = rev*10+rem;       //1 ----> 12 ----> 121
        n = n/10;       //12 ----> 1
    }
    
    if(num==rev){
        printf("%d is a palindrome number", num);
    }
    else{
        printf("%d is not a palindrome number", num);
    }
    
    return 0;
}
