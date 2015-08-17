int max3(int x , int y, int z)
{
	 int max = x;

	 if (y > max ) max=y;
	 if (z >max) max = z;
	 return (max);
}
int main(void)
{
 int na, nb,nc;

 puts("输入三个整数");
 printf("整数1： "); scanf("%d", &na);
 printf("整数2 ："); scanf("%d", &nb);
 printf("整数3 ："); scanf("%d", &nc);

 printf("最大的是  %d \n", max3(na,nb,nc));

 return (0);

}


/*输入三个整数
整数1： 1
整数2 ：2
整数3 ：3
最大的是  3 */

