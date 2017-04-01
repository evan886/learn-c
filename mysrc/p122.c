#include <stdio.h>
 void put_stars(int no)
 {
	 while (no-- >0)
		 putchar('*');

 }

 int main(void)
 {
	  int i, ln;
	  printf("三角形有几层:"); scanf("%d",&ln);

	  for (i = 1; i <= ln; i++)
	  {
		  put_stars(i);  putchar('\n');
	  }
	  return (0);
 }

/* i 为1 时输出一个 * 然后回车，i 为2时 输入一个* while还是符合条件 所以再输出一个 * 然后 不符合条件 于是 输出回车 回到下面的 for */

/*
 三角形有几层:3
 *
 **
 ***
 */

