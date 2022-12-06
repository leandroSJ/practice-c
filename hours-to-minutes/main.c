#include <stdio.h>

int main()
{
    int numberOfHours;
    long numberOfSeconds;

    printf("Number of hours: "); scanf("%d", &numberOfHours);
    numberOfSeconds = numberOfHours < 0 ? 0 : numberOfHours * 3600L;

    printf("%d hours has %ld seconds\n", numberOfHours, numberOfSeconds);

}
