// finding factorial of a number using recursion

#include <stdio.h>

int factorial(int num) {
    if (num == 0) {
        return 1;
    }
    
    return num * factorial(num-1);
}

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("%d\n", factorial(num));
}
