#include <stdio.h>
int main()
{
  int var;
  int *ptr;
  int **pptr;

  var = 3000;
  /* 获取 var 的地址 */ 
  ptr = & var;

  /* 使用运算符 & 获取 ptr 的地址 */
  pptr = & ptr;

  /* 使用 pptr 获取值 */
  printf("value of  var = %d\n", var );
  printf("value of at *ptr = %d\n", *ptr  );
  printf("value of  at **pptr= %d\n",**pptr );
}

/*
value of  var = 3000
value of at *ptr = 3000
value of  at **pptr= 3000

 * */
