#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
       printf("*****��������һ���������ְ�********\n");
       printf("****��ѡ��  1.play   0.exit   ********\n");
       printf("***************************************\n");
}
void game()
{
       //1.����һ�������
       int ret;
       //2.���ղµ�����
       int guess;
       ret =rand()%100+1;          //rand()���0-32767��ֻ���������������������100ȡ��õ���0-99�������ټ�1��ʹ��ֵ��1-100.
                                                 //rand()����<stdlib.h>������srand(seed)Ҳλ�����С�
       //3.������
       while(1)
       {
              int count;
              printf("�������>:");
              scanf("%d",&guess);
              if(guess>ret)
                     printf("�´���\n");
              else if(guess<ret)
                     printf("��С��\n");
              else
              {
                       printf("��ϲ�㣬�¶���\n");
              break;
              }
              count++;
              if(count>=8)
              {
                     printf("��Ϸ����\n");
                      break;
              }

       }
}
int main()
{
       int input;
       srand((unsigned)time(NULL));     //��ʼ���������ֵ
          //rand()����ÿ�ε���ǰ�����ѯ�Ƿ���ù�srand��seed��
          //srand��������do{}while;ѭ���⣬Ϊ�˷�ֹһֱ���ò�������������Ǻܷ�ɢ��

       do
       {
              menu();
              printf("��ѡ��>:");
              scanf("%d",&input);
              switch(input)
              {
              case 1:game();
                     break;
              case 0:printf("�˳���Ϸ\n");
                     break;
              default:printf("ѡ�����\n");
                     break;

              }
       }while(input);
       return 0;
}
