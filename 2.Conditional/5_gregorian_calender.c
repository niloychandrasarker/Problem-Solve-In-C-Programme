/*According to Gregorian calendar, it was Monday on the date 01/01/1900.
If any year is input through the keyboard write a program to find out what
is the day on 1st January of this year.*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    while (1)
    {
    
    int year,i,day=0;
    printf("Enter year : ");
    scanf("%d",&year);

    for ( i = 1; i < year; i++)
    {
        if (i%4==0)
        {
            day=day+366;
        
        }
        else
        {
            day=day+365;
        }
        
    }
    day=day % 7;
    if(day==1)
       printf("there is monday on 01/01/%d",year);
    else if(day==2)
       printf("there is tuesday on 01/01/%d",year);   
    else if(day==3)
       printf("there is wednesday on 01/01/%d",year);
    else if(day==4)
       printf("there is thursday on 01/01/%d",year);
    else if(day==5)
       printf("there is friday on 01/01/%d",year);
    else if(day==6)
       printf("there is saturday on 01/01/%d",year);
    else if(day==0)
       printf("there is sunday on 01/01/%d",year);  
       else
       printf("there is wrong entry"); 
       printf("\n"); 
    }        
    return 0;
}
