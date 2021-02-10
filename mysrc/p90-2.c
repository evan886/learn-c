#include <stdio.h>

int main(void)
{
	int i ;
	int vc[5] ;   /* 包含5个元素的数组*/

	//	for (i = 0; i<5; i++)
	//		vc[i] = i +1;

	for(i = 0; i<5; i++)
		printf("vc[%d]= %d \n", i,vc[i]);

	return (0);
}

/*vc[0]= 1
vc[1]= 2
vc[2]= 3
vc[3]= 4
vc[4]= 5 */
