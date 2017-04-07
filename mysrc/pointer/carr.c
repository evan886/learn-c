#include <stdio.h>
const int MAX = 3;
int main()
{
	int var[] = {10,100,200};
	int i;
	i=0; 
	for ( i = 0;  i < MAX ; i ++)
  {
	printf("存储值：var[%d] = %d \n", i, var[i]);
        
}
	return 0;
}
/*
存储值：var[0] = 10 
存储值：var[1] = 100 
存储值：var[2] = 200 
*/
