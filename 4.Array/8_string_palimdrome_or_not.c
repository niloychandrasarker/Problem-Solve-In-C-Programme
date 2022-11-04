//C Program To Check A String Is Palindrome Or Not
#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    char str1[20];
    char str2[20];
    printf("enter the string1= ",str1);
    gets(str1);
    int i=0,len=0,j;
   while (str1[i]!='\0')
   {
    i++;
    len++;
   }
   for (j=0, i = len-1; i >=0; i--,j++)
   {
    str2[j]=str1[i];
   }
   str2[j]='\0';
   
   printf("str1= %s\n",str1);
    printf("str2= %s\n",str2);

   int d = strcmp(str1,str2);
 if (d==0)
 
  printf("string is palindrom");
 
 else
 printf("string is not palindrom");
 
 return 0;  
}
