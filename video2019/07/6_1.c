#include<stdio.h>
int main()
{
/*	printf("字符型%d\n",sizeof(char));
	printf("整型%d\n",sizeof(int));
	printf("长整型%d\n",sizeof(long));
	printf("单精度浮点型%d\n",sizeof(float));
	printf("双精度浮点型%d\n",sizeof(double));*/

/*	字符型1
	整型4
	长整型8
	单精度浮点型4
	双精度浮点型8*/


/* char c = 80;
 int i =3;
 float f = 6.3333;
 double d = 2.71745, result;
 result = c/ i + f * d - (f + i);
 printf("%f\n",result);*/

	 int a,b;
	  printf("请输入数值,格式为 a,b \n");
	  scanf("%d,%d,&a,&b"); // err here 写错了这里  "" 不包括&b
	  printf("数值a大于数值b");
	  if (a >b)
	    {
	      printf("数值a大于数值b");
	    }
/*	  if(a <= b)
	    {
	      printf("数值a 不大于数值b");
	    }*/


 return 0;
}
