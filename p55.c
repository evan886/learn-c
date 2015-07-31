#include <stdio.h>

int main(void)
{
	 int num;

	 printf("输入一个整数:");scanf("%d", &num);

	 switch(num % 3)
	 {
	 case 0 : puts("能被3整除"); break;
	 case 1 : puts("能除以3的余数1"); break;
	 case 2 : puts("除以 3 余数是 2"); break;

	 }

	 return (0);

}
