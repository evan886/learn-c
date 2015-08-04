#include <stdio.h>

int main(void)
{
	 int i; int no;
	 printf("请输入一个正整数");
	 scanf("%d", &no);

	 i = 0;
	 while (i <= no)
     {
		 printf("%d", i++);
		 putchar('\n');

	 }
	 return (0);

}
