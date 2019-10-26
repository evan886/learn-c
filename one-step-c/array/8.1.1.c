#include <stdio.h>
#include <stdlib.h>
#define N 100000
int a[N]; // 记录了一个 array a 并作为全局

void gen_random(int upper_bound)
{
	int i;
	for (i = 0; i < N; i++)
		a[i] = rand() % upper_bound;
}
int howmany(int value)
{
	int count = 0, i;
	for (i = 0; i < N; i++)
		if (a[i] == value)
			++count;
	return count;
}
int main(void)
{
	int i;

	gen_random(10);
	printf("value\thow many\n");
	for (i = 0; i < 10; i++)
		printf("%d\t%d\n", i, howmany(i));

	return 0;
}

/*
 有空再看看代码
 http://docs.linuxtone.org/ebooks/C&CPP/c/ch08s02.html
 *
 *
 *
value	how many
0	10114
1	9879
2	9881
3	10162
4	10033
5	9753
6	10064
7	10078
8	10092
9	9944*/
