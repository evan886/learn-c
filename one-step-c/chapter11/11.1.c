#include <stdio.h>

#define LEN 5
int a[LEN] = { 10, 5, 2, 4, 7 };

void insertion_sort(void)
{
	int i, j, key;
	for (j = 1; j < LEN; ++j) {
		printf("%d, %d, %d, %d, %d\n",
		       a[0], a[1], a[2], a[3], a[4]);
		key = a[j];  //key 标记为未排序的第一个元素
		i = j - 1;
                // key  与已排序元素从大到小比较，寻找key应插入的元素
		while (i >= 0 && a[i] > key) {
			a[i+1] = a[i];
			--i; //跳出while 
		}
		a[i+1] = key;
	}
	printf("%d, %d, %d, %d, %d\n",
	       a[0], a[1], a[2], a[3], a[4]);
}

int main(void)
{
	insertion_sort();
	return 0;
}
/*
10, 5, 2, 4, 7
5, 10, 2, 4, 7
2, 5, 10, 4, 7
2, 4, 5, 10, 7
2, 4, 5, 7, 10


 */
