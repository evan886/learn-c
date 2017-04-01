#include <stdio.h>
int main(void)
{
 int cont;
 do {
	  int no;
	  printf("输入一个整数:"); scanf("%d",&no);

	  if (no % 2 )
		  puts("奇数");
	  else
		  puts("偶数");

	  printf("再来一次么 [yes ''' 0 / NO '''9]:");
	  scanf("%d",&cont);
 }while(cont == 0);
 return (0);
}