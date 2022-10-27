/*Write a program to print out all Armstrong numbers between 1 and
10000. If sum of cubes of each digit of the number is equal to the number
itself, then the number is called an Armstrong number. For example, 153 =
(1*1*1) + (5*5*5) + (3*3*3).*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    while(1)
    {
    
    int num,temp,r,result=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
          r=temp%10;
            result += r * r * r;
          temp=temp/10;
    }
    if (num==result)
    {
    printf("this is amstrong number\n");
    }
    else
      printf("this is not amostrong number\n");

    }
    
}
