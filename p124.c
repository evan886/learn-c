#include <stdio.h>
int scan_unit(void)
{
 int tmp;
 do
  	  {
	 printf("请输入一个非负整数:"); scanf("%d", &tmp);
	 if ( tmp < 0)
		 puts("\a 请不要输入负整数");
  	  }while (tmp < 0);
 	 return (tmp);
}

 int rev_int(int num)
 {
	 int tmp =0;
	 if (num > 0)
	 {
		 do
		 {
			 tmp = tmp * 10 + num % 10;
			 num /= 10;  // 右移一位
		 }while (num >0);
	 }
	 return (tmp);
 }
 
//此表示main 函数不包含形参
 int main(void)
 {
	 int nx = scan_unit();
	 printf("该整数倒转后的值是  %d . \n", rev_int(nx));
	 return (0);
 }

//  p62

/*
 请输入一个非负整数:-5
  请不要输入负整数
 请输入一个非负整数:118
 该整数倒转后的值是  811 .
*/
