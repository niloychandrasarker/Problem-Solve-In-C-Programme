/*Write a program to count the frequencies of each character present in a
text. (In addition to alphabet letters, count also the space, tab and
punctuation letters)*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str[100],c;
    int count=0;
    printf("Enter a string= ");
    gets(str);
    for(c='a';c<='z';c++)
    {
        count=0;
        for (int i = 0; str[i]!=NULL; i++)
        {
         if (c==str[i])
        
            count++;
        
        }
        
     if (count>0)
        printf("%c Found in %d time\n ",c,count);
    }
    return 0;
}
