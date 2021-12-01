/******************************************************************************

CHECK WHETHER CHARACTER IS ALPHABET OR NOT

*******************************************************************************/

#include <stdio.h>

int main()
{
    char c;
    printf("Enter Character\n");
    scanf("%c", &c);
    
    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        printf("%c is an Alphabet\n", c);
    }
    else{
        printf("%c is not an Alphabet\n", c);
    }
    
    return 0;
}
