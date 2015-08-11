
#include <stdio.h>
#define NUMBER 5

int main(void)
{
	 int i;  int tensu[NUMBER];  int max,min;

	 puts("请输入学生的分数");
	 for ( i = 0; i < NUMBER; i++)
	 {
		 printf("%2d号:", i +1); scanf("%d", &tensu[i]);
	 }

	 min = max =tensu[0];
	 for (i =1; i < NUMBER;i++)
	 {
		 if(tensu[i] > max) max = tensu[i];
		 if(tensu[i] < min) min = tensu[i];
	 }

	 printf("最高分 %d\n", max);
	 printf("最低分 %d\n", min);

	 return (0);
}



/*
请输入学生的分数
 1号: 1
 2号:2
 3号:3
 4号:4
 5号:5
最高分 5
最低分 1
*/

