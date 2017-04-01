#include <stdio.h>
int main(void)
{
	 int i;
	 double vd[5];

	 for (i = 0; i<5; i++ )
		 vd[i] = 0.0;

	 for (i = 0; i<5; i++)
		 printf("vd[%d]= %.1f\n",i ,vd[i]);

	 return (0);
}


/*
vd[0]= 0.0
vd[1]= 0.0
vd[2]= 0.0
vd[3]= 0.0
vd[4]= 0.0
*/