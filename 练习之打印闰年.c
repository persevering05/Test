#include<stdio.h>

int main()
{
       int year=0,count=0;
       for(year=1000;year<=2000;year++)              //=�Ǹ�ֵ����������1000��==���жϣ��ж��Ƿ���ȣ�
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
