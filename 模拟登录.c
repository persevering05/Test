#include<stdio.h>
#include<string.h>
int main()
{
       int i=0;
       char passward[20]={0};
       for (i=1;i<4;i++)      //i=0;i<3;    i=2;i<5;都可以，只要执行三次就可
       {
              printf("请输入密码");
              scanf("%s",passward);//因为a是整型，所以要取地址。而passward是char数组，本身指向这个数组的地址
                                                      //也就是说a里面存的是内存，passward里面存的是地址
                                                      //&表示存地址，数组后面不要[]就表示首地址。
              if(strcmp(passward,"123456")==0)
              {
                     printf("登陆成功\n");
                     break;
              }
              else
              {
                     printf("密码错误\n");
              }
       }
       if(i==4)
              printf("三次密码均错误，退出程序\n");
       return 0;
}
