#include <stdio.h>

int main(void)
{
	 int i;
	 int va[5] = {  15,20,30	 };  /*初始化*/
	 int vb[5];

	 for (i = 0; i<5; i++)
		 vb[i] =va[i];

	 puts("va vb");
	 puts("---------");
	 for(i = 0; i<5; i++)
		 printf("%3d%3d\n",va[i],vb[i]);

	 return (0);
}

/*  c中不能支持数组的互相赋值  只能对数组的全部元素逐一赋值
 *  vb= va;  err
 *
 va vb
---------
 15 15
 20 20
 30 30
  0  0
  0  0*/

/*
