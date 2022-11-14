/*Write a function to calculate the factorial value of any integer entered
through the keyboard.*/
#include<stdio.h>
#include<conio.h>

int done(int);

int main()
{
	int num, fact;
	printf("Enter a number : ");
	scanf("%d", &num);
	fact = done(num);
	printf("Factorial = %d\n", fact);
	_getch();
	return 0;
}

int done(int a)
{
	int fac = 1, i;
	for (i = 1; i <= a; i++)
		fac = fac*i;

	return(fac);
}
