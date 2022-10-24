/*Find out the sum of each of the following series. 
(iii) 5 – 11 + 17 - … (up to 75 th term )

tips= (5+17+29...75) - (11+23+35...75)
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,sum1=0,sum2=0;
       //(5+17+29...75) 
       for(i=5;i<=75;i=i+12)
       {
       sum1=sum1+i;
       } 
       //(11+23+35...75)
        for(i=11;i<=75;i=i+12)
       {
       sum2=sum2+i;
       } 
       
        printf("\n5 - 11 + 17 - … (up to 75 th term )=%d\n",sum1 - sum2);
    return 0;
}

