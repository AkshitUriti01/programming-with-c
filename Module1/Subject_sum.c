#include <stdio.h>

int main() {
    float s1,s2,s3,s4,s5;
    printf("Enter marks obtained in subject1: ");
    scanf("%f", &s1);

    printf("Enter marks obtained in subject2: ");
    scanf("%f", &s2);

    printf("Enter marks obtained in subject3: ");
    scanf("%f", &s3);

    printf("Enter marks obtained in subject4: ");
    scanf("%f", &s4);

    printf("Enter marks obtained in subject5: ");
    scanf("%f", &s5);

    float sum = s1+s2+s3+s4+s5;
    float avg = sum/5;
    float percentage = (sum/500)*100;

    if (sum > 500) {
        printf("Invalid entry of marks!! Please check!!");
    } else {
        printf("\nTotal marks obtained = %.2f", sum);
        printf("\nAverage of 5 subjects = %.2f", avg);
        printf("\nPercentage obtained = %.2f", percentage);

    }
    
    return 0;
}