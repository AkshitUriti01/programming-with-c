#include <stdio.h>

int factorial (int num) {            
    if (num == 0) {
        return 1;
    }

    return num * factorial(num-1);
    /* 
        ans = 4 * 3 * 2 * 1 * 1 => 24
        

    */
}

int main() 
{
    

    return 0;
}