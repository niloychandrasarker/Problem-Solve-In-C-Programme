/*If a 5 digit number is input through the keyboard, write a program to
reverse the number.. */

#include <stdio.h>
int main(int argc, char const *argv[])
{
    while(1)
    {
    
    int num,temp,r,sum=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
          r=temp%10;
          sum=sum*10+r;
          temp=temp/10;
    }
printf("sum of degit: %d\n",sum);
    }
    
}
