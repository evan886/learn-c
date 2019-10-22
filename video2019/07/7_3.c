#include <stdio.h>
int main()
{
  int a,b;
  printf("请输入数值,格式为 a,b \n");
  scanf("%d,%d",&a,&b);
  if (a >b)
    {
      printf("数值a大于数值b");
    }
  //  if(a <= b)
  else
    {
      printf("数值a 不大于数值b");
    }
  return 0;
}
