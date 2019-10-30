#include <math.h>
#include <stdio.h>
double distance(double x1,double y1,double x2,double y2)
{
   double dx=x2 - x1;
   double dy = y2 - y1;
 /*  printf("dx is %f\ndyis %f\n", dx, dy);*/
	double dsquared = dx * dx + dy * dy;
	/*printf("dsquared is %f\n", dsquared);*/
	double result =sqrt(dsquared); // here
	return result;
	/* return 0.0;*/
}


int main(void)
{
   printf("distance is %f\n",distance(1.0,2.0,4.0,6.0));
		   return 0;
}


/*gcc -Wall -lm  distance.c
 *
 *gcc test.c –lm  //-lm就是链接到math库
 * */
