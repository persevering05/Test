#include<stdio.h>

int main()
{
       char ch='w';
       char* p=&ch;
       printf("%d\n",sizeof(p));
       *p='a';
       printf("%c",ch);
       return 0;
}
