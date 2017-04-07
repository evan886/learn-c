#include <stdio.h>
const int MAX = 3;
int main()
{
	int var[] = {10,100,200};
	int i, *ptr;

	/* 指针中的数组地址 */
	ptr = var; 
	for ( i = 0; i < MAX ;  i++)
  {
	printf("存储地址：var[%d] = %x \n", i, ptr);
	printf("存储值：var[%d] = %d \n", i, *ptr);
        
        /* 移动到下一个位置 */
	ptr ++;
}
	return 0;
}

/*
存储地址：var[0] = a9df3f90 
存储值：var[0] = 10 
存储地址：var[1] = a9df3f94 
存储值：var[1] = 100 
存储地址：var[2] = a9df3f98 
存储值：var[2] = 200 
*/
