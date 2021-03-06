//顺序查找  
#include <stdio.h>

#define NUMBER 5
#define FAILED  -1

int search(const int vc[], int key, int no)
{
	int i =0;
	while (1)
	{
		if (i == no)
			return (FAILED); /*   查找失败*/
		if (vc[i] == key)
			return (i);   /*  查找成功*/
		i ++;
	}
}

int main(void)
{
	int i, ky,idx; int vx[NUMBER];

	for (i =0; i < NUMBER; i++)
	{
		printf("vx[%d]:", i);  scanf("%d", &vx[i]);
	}
	printf("要查找的值:"); scanf("%d", &ky);
	idx = search(vx,ky,NUMBER);

	if (idx == FAILED)
		puts("\a查找失败.");
	else
		printf("%d 是数组的第%d 号元素 .\n", ky,idx + 1);
	return (0);

}



/*
vx[0]:1
vx[1]:2
vx[2]:3
vx[3]:4
vx[4]:5
要查找的值:2
2 是数组的第2 号元素 .
*/
