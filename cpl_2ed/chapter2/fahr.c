#include <stdio.h>

/* 当 fahr=0,20,... ,300 时,分别
打印华氏温度与摄氏温度对照表 */

main()
{
  int fahr,celsius;
  int lower,upper,step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper)
  {
	  celsius = 5 * (fahr-32) / 9;
	  printf("%d\t %d\n, fahr, celsius");
	  fahr = fahr + step;

  }
}
