#include<stdio.h>
int fibo(int num);
void main()
{
    int num,c=0,i;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Fibonacci Series:\n");

    for(i=1;i<=num;i++)
    {
        printf("%d\n", fibo(c));
        c++;
    }
}
int fibo(int num)
{
    if(num==0)
    {
        return 0;
    }

    else if(num==1)
    {
        return 1;
    }

    //fibonacci = 1 1 2 3 5 8
    // where n = (n-1) + (n-2)
    else
    {
        return (fibo(num-1)+fibo(num-2));
    }
}