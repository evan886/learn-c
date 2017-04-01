// p115
#include <stdio.h>

int maxof(int x, int y)
{
	 if (x > y )
		 return (x);
	 else
		 return (y);
}

int main(vodi)
{
	int na , nb;
	puts("请输入两个整数");
	printf("整数1 :"); scanf("%d", &na);
	printf("整数2 :"); scanf("%d", &nb);

	printf("大的整数的值是  %d \n", maxof(na,nb));

	return (0);

}

/*

请输入两个整数
整数1 : 2
整数2 :7
大的整数的值是  7
*/

