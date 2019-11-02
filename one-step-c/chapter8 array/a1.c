#include <stdio.h>
int main(void)
{
	int count[4] = {3,2,},i;
	for (i=0; i<4;i++)

		printf("count[%d]=%d\n",i,count[i]);
	return 0;
        
}
/*
count[0]=3
count[1]=2
count[2]=0
count[3]=0
格式化输出   count[%d] 为什么出来是 count[0]=3 ，“字符串 ？”

http://docs.linuxtone.org/ebooks/C&CPP/c/ch08s01.html
*/
