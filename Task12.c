#include <stdio.h>
#include <ctype.h> 

int main() {
  
    char ch;

   
    printf("Enter a character: ");
    scanf(" %c", &ch);  

    
    if (isalpha(ch)) {
        printf("The character '%c' is an alphabet.\n", ch);
    } else if (isdigit(ch)) {
        printf("The character '%c' is a digit.\n", ch);
    } else if (ispunct(ch)) {
        printf("The character '%c' is a special character.\n", ch);
    } else {
        printf("The character '%c' is neither an alphabet, digit, nor special character.\n", ch);
    }

    return 0;
}
