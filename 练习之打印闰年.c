#include<stdio.h>

int main()
{
       int year=0,count=0;
       for(year=1000;year<=2000;year++)              //=是赋值，令他等于1000；==是判断，判断是否相等；
       {
              if(((year%4==0)&&(year%100!=0))||(year%400==0))
                     {
                            printf("%5d",year);
                            count++;
              }
       }
       printf("\n%d",count);
       return 0;
}
