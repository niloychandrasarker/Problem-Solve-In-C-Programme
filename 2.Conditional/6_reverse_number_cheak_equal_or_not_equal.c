/*A five digit number is entered through the keyboard. Write a program to
obtain the reverse number and to determine whether the original numbers
are equal or not. */
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
    printf("reveerse number is = %d\n",sum);
    if (num==sum)
    {
    printf("they is same");
    }
    else
      printf("they is different\n");

    }
    
}
