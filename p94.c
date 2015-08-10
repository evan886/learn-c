/*输入数组元素的值并显示*/

#include <stdio.h>
int main(void)
{
	int i; int vx[5];

	for (i = 0; i<5; i++)
	{
		 printf("vx[%d]:",i); scanf("%d", &vx[i]);
	}

	for (i = 0; i< 5; i++)
		printf("vx[%d]=%d\n", i, vx[i]);

	return (0);

}


/*vx[0]: 3
vx[1]:4
vx[2]:5
vx[3]:7
vx[4]:8

vx[0]=3
vx[1]=4
vx[2]=5
vx[3]=7
vx[4]=8*/


