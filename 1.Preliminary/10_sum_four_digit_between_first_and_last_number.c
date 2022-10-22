/*. If a 4 digit number is input through the keyboard, write a program to
obtain the sum of the first and last digit of this number. */
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,a,b,c,d;
	printf("Enter a four digit number : ");
	scanf("%d", &num);
	d=num%10;
	c=(num/10)%10;
	b=(num/100)%10;
	a=(num/1000)%10;
	printf("the sum of the first and last digit= %d", a+d);
	getch();
	return 0;
}