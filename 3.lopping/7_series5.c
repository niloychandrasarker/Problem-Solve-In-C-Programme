 /*Find out the sum of each of the following series. n is the input from user 
 (v) 1 +
2!
2
2
+
3!
3
2
+ … +
!
*/  
 #include<stdio.h> 
int main()  
{  
    int num = 1, n, i;  
    float sum = 0.0, fact;  
    printf("Enter any number = ");
    scanf("%d",&n);
    while(num <= 7)  
    {  
        fact = 1;  
        for(i = 1; i <= num; i++)  
        {  
            fact = fact * i;  
        }  
  
        sum = sum + (num*num / fact);  
  
        num++;  
    }  
  
    printf("Sum of series is %f\n", sum);  
  
    return 0;  
}  