#include <stdio.h>
int main(void)
{
	 int uchida, satoh;
	 int  sanaka, hiraki, masaki, sum =0;
	 puts("输入分数");
	 printf("1号"); scanf("%d", &uchida);
	 printf("2号"); scanf("%d", &satoh );
	 printf("3号"); scanf("%d", &sanaka );
	 printf("4号"); scanf("%d", &hiraki );
	 printf("5号"); scanf("%d", &masaki );

	  sum +=uchida;
	  sum +=satoh;
	  sum +=sanaka;
	  sum +=hiraki;
	  sum +=masaki;

printf("总分 % 5d \n", sum);
printf("平均分 %5.1f\n", (double)sum/5);

return (0);
}


/*输入分数
1号 95
2号83
3号85
4号63
5号89
总分   415
平均分  83.0*/