#include <stdio.h>
const int MAX = 3;
int main()
{
	int var[] = {10,100,200};
	int i, *ptr;
	/* 指针中第一个元素的地址 */
	ptr = var; 
	i=0; 
	while ( ptr <= &var[MAX - 1 ])
  {
	printf("存储地址：var[%d] = %x \n", i , ptr);
	printf("存储值：var[%d] = %d \n", i, *ptr);
        
	/* 指向上一个位置 */
	ptr ++;
	i ++;
}
	return 0;
}
/*
存储地址：var[0] = f53e3540 
存储值：var[0] = 10 
存储地址：var[1] = f53e3544 
存储值：var[1] = 100 
存储地址：var[2] = f53e3548 
存储值：var[2] = 200 
*/
