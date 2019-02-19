/*
 ============================================================================
 Name        : ctest.c
 Author      : evan886@gmail.com
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 半径 =3

面积=28.260000

 */
/*
#include <stdio.h>
#define PI 3.14
int main()
{
  float r, s;
  printf("半径 =");
  scanf("%f",&r);  //输入半径数值，存入变量中
  s = PI * r * r;
  printf("\n面积=%f\n",s);
}
*/#include <stdio.h>
#include <stdio.h>
#include <math.h>
#define PI 3.14
float area(float r)
{
  float s;
  s = PI *pow(r,2);
  return s;
}
int main()
{
  float r, s;
  printf("半径 =");
  scanf("%f",&r);  //输入半径数值，存入变量中
  s = area(r);
  printf("\n面积=%f\n",s);
  return 0;
}
