#include <stdio.h>
int main()
{
	int n[10]; /* n 是一个包含 10 个整数的数组 */
	int i,j;

	 /* 初始化数组元素 */ 	
	for (i =0; i < 10; i++)
	{
		n [ i ] = i +100;  /* 设置元素 i 为 i + 100 */
	}

	 /* 输出数组中每个元素的值 */
	for ( j =0; j < 10; j++)
	{
		printf ("element[%d] = %d\n", j, n[j]);
	}
	return 0;

}

/*
 element[0] = 100
 element[1] = 101
 element[2] = 102
 element[3] = 103
 element[4] = 104
 element[5] = 105
 element[6] = 106
 element[7] = 107
 element[8] = 108
 element[9] = 109

 * */
