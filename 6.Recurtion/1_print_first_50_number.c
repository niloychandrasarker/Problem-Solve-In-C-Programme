//Write a program in C to print first 50 natural numbers using recursion.
#include<stdio.h>
int  numPrint(int);
int main()
{
    int n = 1;
	
	printf(" The natural numbers are :");
    numPrint(n);
    printf("\n\n");
    return 0;
}
int numPrint(int n)
{
    if(n<=50)
    {
         printf(" %d ",n);
         numPrint(n+1);
    }
}