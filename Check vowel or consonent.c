/******************************************************************************

TO CHECK WHETHER THE CHARACTER IS VOWEL OR CONSONENT

VOWEL - 'A', 'E', 'I', 'O', 'U'

REST OF THE ALPHABETS ARE CONSONENT

*******************************************************************************/

#include <stdio.h>

int main()
{
    char alpha;
    printf("Enter Alphabet\n");
    scanf("%c", &alpha);
    
    if (alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u'){
        printf("%c is a Vowel\n", alpha);
    }
    else if (alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U'){
        printf("%c is a Vowel\n", alpha);
    }
    else{
        printf("%c is a Consonent\n", alpha);
    }

    return 0;
}
