#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
       char input[20];
       system("shutdown -s -t 60");  //ִ�йػ�
again:
       printf("���Լ�����60���ػ������ȡ���ػ���������:��������\n������>:");
       scanf("%s",input);
       if(strcmp(input,"��������")==0)
       {
                     system("shutdown -a");      //�ػ�ȡ��
       }
       else
              goto again;
       return 0;
}
