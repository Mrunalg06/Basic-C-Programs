/******************************************************************************

ASCII value of a character - integer value is the ASCII code of the character

*******************************************************************************/

#include <stdio.h>

int main()
{
    char c;
    printf("Enter any Alphabet\n");
    scanf ("%c", &c);
    printf("ASCII value  of '%c' is %d",c,c);

    return 0;
}
