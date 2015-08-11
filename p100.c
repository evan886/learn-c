

#include <stdio.h>
#define NUMBER 3
int main(void)
{
	int i; int snum = 0;  /*及格的人数 */
	int tensu[NUMBER];  /*NUMBER名学生的分数*/
	int succs[NUMBER];   /*及格学生一览表(保存及格学生的下标)*/

	puts("请输入学生的分数");
	for (i = 0; i < NUMBER; i++)
	{
		printf("%2d号:",i+1);scanf("%d",&tensu[i]);
		if (tensu[i] >= 60)
		succs[snum++]=i;   /*添加到及格学生一览表中*/
	}

	puts("及格学生一览表"); puts("-------------------------");
	for (i = 0; i < snum; i ++)
		printf("%2d 号 (%3d分) \n", succs[i] + 1, tensu[succs[i]]);

	return (0);


	}

/*
请输入学生的分数
 1号:70
 2号:35
 3号:56
及格学生一览表
-------------------------
 1 号 ( 70分) */
