#include <stdio.h>
int main(void)
{
 int cont;
 do
 {
	  int num, i;

	  do
	  {
		  printf("请输入一个非负整数"); scanf("%d",&num);
		  if (num <0)
			  puts("不要输入负数");
	  }while(num < 0);

	  for(i = 1; i<= num; i++)
		  putchar('*');
	  putchar('\n');

	  printf("是否继续执行?[Yes...0/NO...9]:");
	  scanf("%d",&cont);
 }while(!cont);
 return (0);

}

/*请输入一个非负整数2
**
是否继续执行?[Yes...0/NO...9]:
0
请输入一个非负整数2
**
是否继续执行?[Yes...0/NO...9]: 9*/