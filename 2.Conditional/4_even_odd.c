/*Any integer is input through keyboard. Write a program to find out
whether it is an odd number or even number.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("Enter any integer: ");
    scanf("%d", &num);

    if(num%2==0)
    {
       printf("%d is  Even Number", num);
    }
    else
    {

       printf("%d is Odd Number", num);
    }

    return 0;
}