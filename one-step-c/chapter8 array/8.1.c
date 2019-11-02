#include <stdio.h>
#include <stdlib.h>
#define N 20

int a[N];
void gen_random(int upper_bound)
{
	int i;
	for (i = 0; i < N; i++)
		a[i] = rand() % upper_bound;
}

void print_random()
{
	int i;
	for (i = 0; i < N; i++)
		printf("%d ", a[i]);
	printf("\n");
}

int main(void)
{
	gen_random(10);
	print_random();
	return 0;
}

/*
3 7 8 5 2 3 7 8 8 0 9 2 6 3 3 8 6 7 9 3


select "Run". -> Run Configurations. ->Choose "C++ Application".  ->   build  configuration  --> select debug     auto build#is me

Click on the "New Launch Configuration" icon on the top left of the open window.
Select "Browse" under the C/C++ Application.
Browse to the folder where you made your project initially.
Enter the Debug folder.
Click on the binary file with the same name as the project.
Select "OK".
Click "Apply" to confirm the link you just set.
Close that window.


*/
