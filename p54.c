#include <stdio.h>

int main(void)

{
	 int num;
	 printf("输入一个整数"); scanf("%d", &num);

	 if(num % 3 == 0)
		  puts("能被3整除");
	 else if (num % 3 == 1)
			 puts("余数是1");
	 else
		 puts("余数是2");

	 return (0);
}
