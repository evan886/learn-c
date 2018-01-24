#include <stdio.h>

/* 当 fahr=0,20,... ,300 时,分别
打印华氏温度与摄氏温度对照表 */
#define LOWER 0
#define UPPER 300
#define STEP 20


main()
{

	int  fahr;

	for (fahr = 0;  fahr <= 300;  fahr  =  fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}


/*

 * */




/*
main()
{
  float  fahr,celsius;
  float  lower,upper,step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper)
  {
	  celsius = (5.0/9.0)  * (fahr-32.0) ;
	  printf("%d\t %d\n, fahr, celsius");
	  fahr = fahr + step;

  }
}

*/

/*
 *
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


 */
