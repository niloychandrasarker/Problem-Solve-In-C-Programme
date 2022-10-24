/*Find out the sum of each of the following series. 
(ii) 7 + 20 + 33 + … ( up to 100 th term )
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,sum=0;
       
       for(i=7;i<=100;i=i+13)
       {
         
       sum=sum+i;
       } 
        
        printf("\n7 + 20 + 33 + … 100=%d\n",sum);
    return 0;
}

