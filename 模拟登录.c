#include<stdio.h>
#include<string.h>
int main()
{
       int i=0;
       char passward[20]={0};
       for (i=1;i<4;i++)      //i=0;i<3;    i=2;i<5;�����ԣ�ֻҪִ�����ξͿ�
       {
              printf("����������");
              scanf("%s",passward);//��Ϊa�����ͣ�����Ҫȡ��ַ����passward��char���飬����ָ���������ĵ�ַ
                                                      //Ҳ����˵a���������ڴ棬passward�������ǵ�ַ
                                                      //&��ʾ���ַ��������治Ҫ[]�ͱ�ʾ�׵�ַ��
              if(strcmp(passward,"123456")==0)
              {
                     printf("��½�ɹ�\n");
                     break;
              }
              else
              {
                     printf("�������\n");
              }
       }
       if(i==4)
              printf("��������������˳�����\n");
       return 0;
}
