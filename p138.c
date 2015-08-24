#include <stdio.h>


void mat_add(const int ma[2][3],const int mb[2][3], int mc[2][3])
{
		int i, j;
		for (i=0; i <2; i++)
			for(j=0; j<3; j++)
					mc[i][j] = ma[i][j] + mb[i][j];
}


int main(void)
{
	int i, j;
	int ma[2][3] = { {1,2,3},{4,5,6}};
	int mb[2][3] = { {6,3,4},{5,1,2}};
	int mc[2][3] = { 0 };

	mat_add(ma, mb,mc);

	for (i =0; i <2; i++)
	{
		for (j =0; j<3; j++)
			printf("%3d",mc[i][j]);
	putchar('\n');
}

	return (0);
}



/*


7  5  7
9  6  8


*/


