/*Any year is entered through the keyboard. Write a function to determine
whether the year is a leap year or not*/
#include<stdio.h>
void leap(int year);    //leap year function
void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    leap(year);
}

//Leap Year Functionality
void leap(int year)
{
    // If year is divisible by 400
        if(year%400==0)
        {
            printf("%d is a leap year.",year);
        }

    // If year is not divisible by 400
    // but divisible by 100
        else if(year%100==0)
        {
            printf("%d is not a leap year.", year);
        }

    // If year is not divisible by 100
    // but divisible by 4
        else if(year%4==0)
        {
            printf("%d is a leap year.", year);
        }

    // All remaining years are not leap years
        else
        {
            printf("%d is not a leap year.", year);
        }
}
