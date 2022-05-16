#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
       printf("*****快来和我一起来猜数字吧********\n");
       printf("****请选择  1.play   0.exit   ********\n");
       printf("***************************************\n");
}
void game()
{
       //1.生成一个随机数
       int ret;
       //2.接收猜的数字
       int guess;
       ret =rand()%100+1;          //rand()输出0-32767，只是运用了求余算符，除以100取余得到在0-99的数，再加1就使数值在1-100.
                                                 //rand()调用<stdlib.h>函数，srand(seed)也位于其中。
       //3.猜数字
       while(1)
       {
              int count;
              printf("请猜数字>:");
              scanf("%d",&guess);
              if(guess>ret)
                     printf("猜大了\n");
              else if(guess<ret)
                     printf("猜小了\n");
              else
              {
                       printf("恭喜你，猜对了\n");
              break;
              }
              count++;
              if(count>=8)
              {
                     printf("游戏结束\n");
                      break;
              }

       }
}
int main()
{
       int input;
       srand((unsigned)time(NULL));     //初始化种子随机值
          //rand()函数每次调用前都会查询是否调用过srand（seed）
          //srand（）放在do{}while;循环外，为了防止一直调用产生的随机数不是很分散。

       do
       {
              menu();
              printf("请选择>:");
              scanf("%d",&input);
              switch(input)
              {
              case 1:game();
                     break;
              case 0:printf("退出游戏\n");
                     break;
              default:printf("选择错误\n");
                     break;

              }
       }while(input);
       return 0;
}
