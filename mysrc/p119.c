#include <stdio.h>
int  sqr(int x)
{
 return (x * x);
}

int diff (int x, int y)
{
return (x > y ? x - y : y -x);
}

int main(void)
{
 int kx,ky,kx2,ky2;
 puts("请输入两个整数");
 printf("整数  kx :"); scanf("%d", &kx);
 printf("整数 ky :"); scanf("%d", &ky);

 kx2 = sqr(kx); // kx 的平方
 ky2 =sqr(ky);  // ky 的平方

 printf ("kx 和ky的平方差是 %d. \n", diff(kx2,ky2));
// printf ("kx 和ky的平方差是 %d. \n", diff(sqr(kx),sqr(ky));
 return (0);
}

/*请输入两个整数
整数  kx :  5
整数 ky :4
kx 和ky的平方差是 9. */


