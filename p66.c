#include <stdio.h>
int main(void)
{
	int no = 1;
	int sum = 0;

	do {
		sum  = sum +no;
		no = no +1;
	}while (no <= 5);

	printf("1 到5合计是  %d . \n", sum);

	return (0);
}