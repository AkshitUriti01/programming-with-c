#include <stdio.h>

int main() {
    //1hr = 60min
    //1min = 60sec

    // input of time
    int time;
    printf("Enter time in hour: ");
    scanf("%d", &time);

    //converting hours into minutes and seconds
    int min=time*60;
    int sec=min*60;

    //printing converted values in minutes and seconds
    printf("\n\tIn minutes: %i", min);
    printf("\n\tIn seconds: %i", sec);

    return 0;
}