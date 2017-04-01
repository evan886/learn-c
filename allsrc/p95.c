#include <stdio.h>

int main(void)

{
	int i; int vx[5];
	for (i = 0; i < 5; i++)
	{
		printf("vx[%d]:",i); scanf("%d", &vx[i]);
	}

	for (i =0; i < 2; i ++)
	{
		 int temp = vx[i];
		 vx[i] = vx[4-i];
		 vx[4-i]=temp;
	}

	for (i = 0; i < 5; i ++)
		printf("vx[%d]=%d\n", i, vx[i]);
	return (0);
}

/*vx[0]:  1
vx[1]:2
vx[2]:3
vx[3]:4
vx[4]:5
vx[0]=5
vx[1]=4
vx[2]=3
vx[3]=2
vx[4]=1*/
