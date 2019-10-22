#include <stdio.h>
int main()
{
  char buddy[3][200];
  int i;
  printf("请输入联系人姓名");
  scanf("%50s",buddy[0]);
  printf("\n请输入联系人电话");
  scanf("%30s",buddy[1]);
  printf("\n请输入联系人地址");
  scanf("%1990s",buddy[2]);
  printf("\n请你输入的信息是:\n");
  for(i =0; i < 3; i++)
    printf("%s\n",buddy[i]);
  return 0;
  }
/*
请输入联系人姓名evan 
请输入联系人电话2240
请输入联系人地址gz 

请你输入的信息是:
evan
2240
gz

 */
