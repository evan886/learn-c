#include <stdio.h>
int is_prime(int n)
{
  int i;
  for(i=2; i < n ; i++)
	  if( n % i == 0)
		  break;
  if (i ==n)
	  return 1;
  else
	  return 0;
}
int main(void)
{
  int i;
  for (i =1; i <=100; i++)
  {
	  if(!is_prime(i))
		  continue;
	  printf("%d\n",i);
  }
  return 0;
}
/*
is_prime函数从2到n-1依次检查有没有能被n整除的数，如果有就说明n不是素数，立刻跳出循环而不执行++i。

因此，如果n不是素数，则循环结束后i一定小于n，如果n是素数，则循环结束后i一定等于n。注意检查临界条件：2应该是素数，如果n是2，则循环体一次也不执行，但是i的初值就是2，也等于n，在程序中也判定为素数。其实没有必要从2一直检查到n-1，只需要从2检查到sqrt(n)，全都不能整除就足以证明n是素数了，请读者想一想为什么。

在主程序中，从1到100依次检查每个数是不是素数，如果不是素数，并不直接跳出循环，而是++i后继续执行下一次循环，因此用continue语句。注意主程序的局部变量i和is_prime中的局部变量i是不同的两个变量，其实在调用is_prime函数时，主程序中的局部变量i的值和参数n的值相等。

*/
