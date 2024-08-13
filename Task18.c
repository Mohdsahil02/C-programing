#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

   
    printf("Enter a single alphabetic character: ");
    scanf("%c", &ch);

   
    ch = tolower(ch);

  
    if (!isalpha(ch)) {
        printf("The input is not an alphabetic character.\n");
        return 1;
    }

   
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
            break;
    }

    return 0;
}
