/*Find out the sum of each of the following series. n is the input from user 
(vi) 2 * 7 * 12 * … * 37
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,result=1;
       printf("enter N= ");
       scanf("%d",&n);
       for(i=2;i<=n;i=i+5)
       {
         printf("%d*",i);
       result=result*i;
       }
        printf("=%d",result);
    return 0;
}

