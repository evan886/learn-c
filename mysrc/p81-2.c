#include <stdio.h>
int main(void)
{
	 int i, j, ln;
	 printf("三角形有几层");scanf("%d", & ln);

	 for (i = 1; i<= ln; i++)/* i行(i = 1,2 ''',ln)*/
	 {
		  for (j = 1; j<= ln - i; j++)/*显示ln -i 个 ' ' (空格)*/
			  putchar(' ');
		  for (j = 1; j<=i; j++)/*显示i个‘*’*/
			  putchar('*');
		   putchar('\n');/*换行*/
	 }
	 return (0);
}

/*三角形有几层4
   *
  **
 ***
*****/