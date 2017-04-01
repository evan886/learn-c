#include <stdio.h>
/* max value is : 200 */
int max(int num1,int num2);
int main()
{
	 int a = 100;
	 int b = 200; 
	 int ret; 
	 /* 调用函数来获取最大值 */
	 ret = max(a,b);
	 printf ("max value is : %d \n ", ret);
	 return 0;
}
/* 函数返回两个数中较大的那个数 */
int max(int num1, int num2)
{
	/* 局部变量声明 */
	int result;
	if (num1 > num2)
		result = num1;
	else 
		result = num2;
	 return result;
}
