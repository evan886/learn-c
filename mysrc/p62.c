#include <stdio.h>
int main(void)
{
	 int num;

	 do
	 {
		  printf("输入一个非负数:");
		  scanf("%d", & num);
    if (num < 0);
    puts("不要输入负数");
	 }while (num < 0);
	 printf("整数逆向显示的结果是");
	 do  {
		 printf("%d", num % 10);
		 num = num /10;
	 }while (num > 0);
	 puts(".");
	 return (0);
	 }