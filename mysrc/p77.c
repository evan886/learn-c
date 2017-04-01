#include <stdio.h>

int main(void)
{
	 int i; int sum =0; int num,tmp;

	 printf("输入多少个整数;"); scanf("%d", &num);

	 for (i = 0; i < num; i ++)
	 {
		 printf("NO. %d", i +1);scanf("%d",&tmp);
		 sum += tmp;

	 }

	 printf("合计值 %d\n", sum);
	 printf("平均值 %.2f\n", (double)sum / num);
	 return(0);
}

/*输入多少个整数; 2
NO. 12
NO. 24
合计值 6
平均值 3.00*/