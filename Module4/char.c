// not working

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of characters: ");
    scanf("%d", &n);

    char chars[n];
    printf("Enter the characters: ");
    for (int i=0; i<n; i++) {
        scanf("%c", &chars[i]);
    }

    for (int j=0; j<n; j++) {
        printf("%c", chars[j]);
    }


    return 0;
}