#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
       char input[20];
       system("shutdown -s -t 60");  //执行关机
again:
       printf("电脑即将在60秒后关机，如果取消关机，请输入:李萱是猪\n请输入>:");
       scanf("%s",input);
       if(strcmp(input,"李萱是猪")==0)
       {
                     system("shutdown -a");      //关机取消
       }
       else
              goto again;
       return 0;
}
