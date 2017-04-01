#include <stdio.h>
int main(void)
{
	int i, j, ln;

	printf("三角形有几层;"); scanf("%d", &ln);

	for (i = 1; i <= ln; i++)
	{
		for (j = 1; j<= i; j++)
			putchar('*');
		putchar('\n');
	}
	return (0);
}

/*三角形有几层;  3
*
**
****/