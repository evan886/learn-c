#include <stdio.h>
#define NUMBER 80
int main(void)
{
	int i, j; int num;  /*实际的人数 */
	int tensu[NUMBER];  /*学生的分数*/
	int bunpu[11]={0};   /*分布图*/
	puts("请输入学生的人数");
	do
	{
		scanf("%d",&num);
		if (num < 1 || num > NUMBER)
			printf("\a 人数范围 [1 到 %d]:", NUMBER);
	}while (num < 1 || num >NUMBER);

	puts("请输入学生的分数");
	for (i = 0; i < num; i++)
	{
		printf("%2d号;", i + 1);
		do
		{
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("\a分数范围 [0 到10] :");
		}while (tensu[i] < 0 || tensu[i]> 100);
		 bunpu[tensu[i] / 10]++; //here
	}

	puts("@@@@ 分布图 @@@@");
	printf("  100:");
	for (j = 0; i <bunpu[10];j++)
		putchar('*');
	putchar('\n');

	for (i = 9; i >= 0; i--)
	{
		printf("%3d - %3d:", i * 10, i * 10 + 9);
		for (j =0; i < bunpu[i]; j++)
			putchar('*');
		putchar('\n');
	}

 return (0);

}

/*
 请输入学生的人数
85
 人数范围 [1 到 80]:15
请输入学生的分数
 1号;17
 2号;38
 3号;100
 4号;95
 5号;23
 6号;62
 7号;77
 8号;45
 9号;69
10号;81
11号;83
12号;51
13号;42
14号;36
15号;60
@@@@ 分布图 @@@@
  100:
 90 -  99:
 80 -  89:
 70 -  79:
 60 -  69:
 50 -  59:
 40 -  49:
 30 -  39:
 20 -  29:
 10 -  19:
  0 -   9:

 *
 * */


