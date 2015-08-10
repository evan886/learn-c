#include <stdio.h>

int main(void)
{
	 int i; int tensu[5]; int sum = 0;
	 puts("请输入学生的分数");
	 for ( i = 0; i < 5; i++)
	 {
		 printf("%2d号:", i +1); scanf("%d", &tensu[i]);
		 sum += tensu[i];
	 }
	 printf("总分 %5d\n", sum);
	 printf("平均分 %5.1f\n", (double)sum/5);

	 return (0);
}

/*
请输入学生的分数
 1号: 95
 2号:83
 3号:85
 4号:63
 5号:89
总分   415
平均分  83.0*/

