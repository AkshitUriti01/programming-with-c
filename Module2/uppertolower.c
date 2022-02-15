// lower case to uppercase

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character to convert into lower case: ");
    scanf("%c", &ch);

    printf("Lowercase= %c", tolower(ch));

    return 0;
}