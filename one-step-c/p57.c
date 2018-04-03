#include <math.h>
#include <stdio.h>
double distance(double x1, double y1, double x2, double y2)
{
       double dx = x2 - x1;
        double dy = y2 - y1;
//        printf("dx is %f\n dy is %f\n",dx,dy);
        //printf("distance is %f\n",distance(1.0, 2.0, 4.0,6.0));
        double dsquared = dx * dx + dy * dy;
//        printf("dsquared is %f\n", dsquared);
        double result = sqrt(dsquared);
        return result;
}

double area(double radius)
{
        return 3.1416 * radius * radius;
}


        
        int  main(void)
{
//       printf("distance is %f\n",distance(1.0, 2.0, 4.0,6.0));
// distance is 5.000000
//       printf("area is %f\n",);

       double radius=distance(1.0, 2.0, 4.0,6.0);
       double result = area(radius);
printf(" area is %f\n",result);
// area is 78.540000

       return 0;
}

/****
evan@kalipc:~/github/learn-c/one-stop-c$ gcc -Wall  p57.c 
/tmp/ccbMqPPq.o：在函数‘distance’中：
p57.c:(.text+0x69)：对‘sqrt’未定义的引用
collect2: error: ld returned 1 exit status

gcc -Wall -lm   p57.c 

***/



