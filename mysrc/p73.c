#include <stdio.h>
int main(void)
{
	 int i = 0;
	 int sum = 0;
	 int num, tmp;

	 printf("输入多少个整数");scanf("%d", &num);

	 while (i < num)
	 {
		 printf("NO . %d:",++i); scanf("%d", &tmp);
		 sum += tmp;
	 }

	 printf("合计值 %d \n ", sum);
	 printf(" 平均值 %.2f \n", (double)sum / num);
	 return (0);
}

/*输入多少个整数 3
NO . 1:2
NO . 2:7
NO . 3:1
合计值 10
  平均值 3.33 */