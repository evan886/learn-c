#include <stdio.h>

int main(void)
{
	 int num;
	 int dig;  //计算位数

	 do {
		  printf("请输入一个非负数");
          scanf("%d",&num);
          if (num < 0);
          puts("\a 不要输入负数");
          	 } while (num < 0);

	 dig =0;
	 do {
		 	  num = num /10;
		 	  dig = dig +1;
	 }while (num >0);
	 printf("号数的位为 %d . \n", dig );

	 return (0);

}