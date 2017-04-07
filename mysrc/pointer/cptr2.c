#include <stdio.h>
const int MAX = 4;
int main()
{
    char *names[] = {
    		    "zara ali",
    		    "hina ali",
    		    "nuha ali",
    		    "sara ali",
    };
    int i =0;
   for ( i = 0;  i < MAX ; i ++)
  {
	printf("存储值：var[%d] = %s \n", i, names[i]);
}
  return 0;
 }
/*
也可以用一个指向字符的指针数组来存储一个字符串列表 
存储值：var[0] = zara ali 
存储值：var[1] = hina ali 
存储值：var[2] = nuha ali 
存储值：var[3] = sara ali
*/
