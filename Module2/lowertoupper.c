// uppercase to lowercase

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character to convert into uppercase: ");
    scanf("%c", &ch);

    printf("Uppercase= %c", toupper(ch));

    return 0;
}