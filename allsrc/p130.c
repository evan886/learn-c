#include <stdio.h>
#define NUMBER 5
int  max_of(int vc [], int no)
{
 int i; int max = vc[0];
 for (i = 1; i < no; i++)
	 if (vc[i] >max)
		 max= vc[i];
 return (max);
}

int main(void)
{
	int i; int eng[NUMBER];  /*英语的分数*/
	int mat[NUMBER];  /*数学的分数*/
	int max_e, max_m;   /*最高分*/

	printf("请输入%d 名学生的分数 . \n", NUMBER);
	for( i =0; i < NUMBER; i++)
	{
		printf("[%d]英语:", i +1); scanf("%d", &eng[i]);
		printf("数学:");  scanf("%d",&mat[i]);
	}
	max_e = max_of(eng,NUMBER);
	max_m = max_of(mat,NUMBER);

	printf("英语的最高分 = %d \n", max_e);
	printf("数学的最高分 = %d \n",max_m);

	return (0);
}

/*

请输入5 名学生的分数 .
[1]英语:53
数学:82
[2]英语:49
数学:35
[3]英语:21
数学:72
[4]英语:91
数学:35
[5]英语:77
数学:12
英语的最高分 = 91
数学的最高分 = 82

*/
