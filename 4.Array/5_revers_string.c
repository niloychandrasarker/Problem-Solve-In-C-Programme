/*Take a string as input and print the characters in reverse order. Don’t use
any built in string function.
*/
#include<stdio.h>
#include<string.h>
        
void main()
{
    int i,n;
    char str[20];
    printf("Enter the String to get reversed\n");
    gets(str);
    strrev(str);
    printf("\nReversed string is = %s\n",str);
   
}