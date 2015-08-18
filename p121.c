#include <stdio.h>
 /*返回dx的no次幂*/
double power(double dx, int no)
{
	 double tmp =1.0;
	 while (no-- >0)
		tmp *=dx;
		return(tmp);
}

int main(void)
{
	int n;  double x;
	printf("请输入一个实数:"); scanf("%lf",&x);
	printf("请输入一个整数:"); scanf("%d", &n);

	printf("%.2f 的 %d次幂是 % .2f . \n", x,n,power(x,n));

	return (0);
}

/*请输入一个实数:4.0
请输入一个整数:3
4.00 的 3次幂是  64.00 . */
