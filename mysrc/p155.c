
#include <stdio.h>
#include <limits.h>

int main(void)
{
  printf("编译器中的 char 型是");

    if(CHAR_MIN)
    	puts("有符号的");
    else
    	puts("无符号的 ");

    return (0);
}


/*

 编译器中的 char 型是有符号的

*/
