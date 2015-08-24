#include <stdio.h>

#define NUMBER 5
#define FAILED  -1

int search( int vc[], int key, int no)
{
	 int i =0;
	 vc[no]=key;    //添加哨兵
	 for (i=0; vc[i] != key; i++)
	 	   ;
	 return (i == no ? FAILED : i);
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
vx[1]:3
vx[2]:4
vx[3]:5
vx[4]:6
要查找的值:1
1 是数组的第1 号元素 .
*/