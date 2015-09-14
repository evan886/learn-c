#include <stdio.h>
#define putsa(str) (putchar('\a'), puts(str) )

int main(void)
{
	int na;
	 printf("请输入一个整数;"); scanf("%d", &na);

	 if (na)
		 putsa("这个数不是 0");
	// if (na)
		// printf("故意改的 哈哈;");
	 else
		 putsa("这个数是0");


	 return (0);
}