#include<stdio.h>
/*  通过输入一个数字来判断它是否为奇数或偶数 */
int main()
{
   int num; 

   printf ("请输入一个数字:");
   scanf("%d",&num);

   (num%2==0)? printf("偶数"): printf("奇数");
}
