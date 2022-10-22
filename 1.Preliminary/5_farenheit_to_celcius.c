/**
 * C program to convert temperature from degree fahrenheit to celcius
 */

#include <stdio.h>

int main()
{
    float celcius, fahrenheit;

    /* Input temperature in fahrenheit */
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    /* Fahrenheit to celcius conversion formula */
    celcius = (fahrenheit - 32) * 5 / 9;

    /* Print the value of celcius */
    printf("%.2f Fahrenheit = %.2f Celcius", fahrenheit, celcius);

    return 0;
}