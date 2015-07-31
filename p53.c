#include <stdio.h>

int main(void)
{
 int month;
 printf("请输入月份");
 scanf("%d", &month);

 if (month >= 3 && month <= 5)
	 puts("春天");
 else if (month >= 6 && month <= 8)
	 puts("夏天");

 else if (month >= 9 && month <= 11)
	 puts("秋天");
 else if (month == 1 || month == 2 || month == 12)
	 puts("冬天");

 else
	  puts("月份不存在 \a");
  return (0);
}