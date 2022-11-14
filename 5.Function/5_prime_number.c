/*. A prime integer is entered through the keyboard. Write a function to
obtain the prime factors of this number. For example, prime factors of 24
are 2, 2, 2 and 3 whereas prime factor of 35 are 5 and 7.*/
#include<stdio.h>  
  
void primefactors(int num)  
{  
    int count;  
  
    printf("\nPrime Factors of %d are ..\n", num);  
    for(count = 2; num > 1; count++)  
    {  
        while(num % count == 0)  
        {  
            printf("%d ", count);  
            num = num / count;  
        }  
    }  
    printf("\n");  
}  
  
int main()  
{  
    int num;  
  
    printf("Enter a positive integer\n");  
    scanf("%d", &num);  
  
    primefactors(num);  
  
    return 0;  
}