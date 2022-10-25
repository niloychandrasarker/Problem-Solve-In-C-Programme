/*Write a program to find first n Fibonacci number where n is the input
from user.
*/#include <stdio.h>
int main(int argc, char const *argv[])
{
    int first=0,second=1,i,fibo,number;
       printf("enter range= ");
       scanf("%d",&number);
       printf("\n%d %d",first,second);//printing 0 and 1    
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  fibo=first+second;    
  printf(" %d",fibo);    
  first=second;    
  second=fibo;    
 }  
  return 0;  
 }    
    


