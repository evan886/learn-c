#include <stdio.h>
#define LEN 8
int a[LEN] = { 5, 2, 4, 7, 1, 3, 2, 6 };
void merge(int start, int mid, int end)
{
	int n1 = mid - start + 1;
	int n2 = end - mid;
	int left[n1], right[n2];
	int i, j, k;
	for (i = 0; i < n1; i++) /* left holds a[start..mid] */
		left[i] = a[start+i];
	for (j = 0; j < n2; ++j) /* right holds a[mid+1..end] */
		right[j] = a[mid+1+j];

	i = j = 0;
	for (k = start; i < n1 && j < n2; ++k) {
		if (left[i] < right[j]) {
			a[k] = left[i];
			++i;
		} else {
			a[k] = right[j];
			++j;
		}
	}

	if (i < n1) 		/* left[] is not exhausted */
		for (; i < n1; i++) {
			a[k] = left[i];
			++k;
		}
	if (j < n2)		/* right[] is not exhausted */
		for (; j < n2; ++j) {
			a[k] = right[j];
			++k;
		}
}
void sort(int start, int end)
{
	int mid;
	if (start < end) {
		mid = (start + end) / 2;
		printf("sort (%d-%d, %d-%d) %d %d %d %d %d %d %d %d\n", 
		       start, mid, mid+1, end, 
		       a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
		sort(start, mid);
		sort(mid + 1, end); // sort (start=0, end=1) at 11.2.c:46  mid  end  start 0,0,0 时不成立，又回来上次的  mid0 end 1, start 0 
		merge(start, mid, end);
		printf("merge (%d-%d, %d-%d) to %d %d %d %d %d %d %d %d\n", 
		       start, mid, mid+1, end, 
		       a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
	}
}
int main(void)
{
	sort(0, LEN-1);
	return 0;
}

/* 
 gcc -g -Wall main.c  -o main

 Temporary breakpoint 1, main () at main.c:55
55		sort(0, LEN-1);
Missing separate debuginfos, use: debuginfo-install glibc-2.17-260.el7.x86_64
(gdb) s
sort (start=0, end=7) at main.c:40
40		if (start < end) {
(gdb) disp  mid 
1: mid = 0
(gdb) disp start 
2: start = 0
(gdb) disp end
3: end = 7


读到这里 不太明白
(gdb) s
sort (0-0, 1-1) 5 2 4 7 1 3 2 6
45			sort(start, mid);
3: end = 1
2: start = 0
1: mid = 0
(gdb) s
sort (start=0, end=0) at main.c:40
40		if (start < end) {
3: end = 0
2: start = 0
1: mid = 0
(gdb) s
52	}
3: end = 0
2: start = 0
1: mid = 0

(gdb) s # end=1  是哪传来的形参 
sort (start=0, end=1) at main.c:46
46			sort(mid + 1, end); 
3: end = 1
2: start = 0
1: mid = 0




 
 
 
 
 (gdb) s
sort (start=0, end=0) at 11.2.c:40
40		if (start < end) {
(gdb) s
52	}
(gdb) bt
#0  sort (start=0, end=0) at 11.2.c:52
#1  0x0000000000400b3d in sort (start=0, end=1) at 11.2.c:45
#2  0x0000000000400b3d in sort (start=0, end=3) at 11.2.c:45
#3  0x0000000000400b3d in sort (start=0, end=7) at 11.2.c:45
#4  0x0000000000400bef in main () at 11.2.c:55
sort (start=0, end=1) at 11.2.c:46  #end =1 在哪来的 
46			sort(mid + 1, end); // sort (start=0, end=1) at 11.2.c:46
(gdb) s
sort (start=1, end=1) at 11.2.c:40
40		if (start < end) {
(gdb) s
52	}

 
 
 
 gdb) disp mid
3: mid = 21845
(gdb) s
41			mid = (start + end) / 2;
1: start = 0
2: end = 7
3: mid = 21845
(gdb) s
42			printf("sort (%d-%d, %d-%d) %d %d %d %d %d %d %d %d\n", 
1: start = 0
2: end = 7
3: mid = 3

 
 在bsd 上有错啊  在debian上正常了  在centos7 居然没初始化的mid 是 0呢
 (gdb) s
sort (start=0, end=7) at 11.2.c:40
40		if (start < end) {
(gdb) disp  mid 
1: mid = 8 #为什么是8
(gdb) disp start 
2: start = 0
(gdb) disp end 
3: end = 7
(gdb) s
41			mid = (start + end) / 2;
1: mid = 8
2: start = 0
3: end = 7

 
 * 
 * 
 * 
 * 
 * 
 * 
 * 这个是马上结束 
 (gdb) start 
Temporary breakpoint 1 at 0x400be0: file 11.2.c, line 55.
Starting program: /home/evan/github/learn-c/one-step-c/chapter11/11.2 

Temporary breakpoint 1, main () at 11.2.c:55
55		sort(0, LEN-1);
(gdb) n
sort (0-3, 4-7) 5 2 4 7 1 3 2 6
sort (0-1, 2-3) 5 2 4 7 1 3 2 6
sort (0-0, 1-1) 5 2 4 7 1 3 2 6
merge (0-0, 1-1) to 2 5 4 7 1 3 2 6
sort (2-2, 3-3) 2 5 4 7 1 3 2 6
merge (2-2, 3-3) to 2 5 4 7 1 3 2 6
merge (0-1, 2-3) to 2 4 5 7 1 3 2 6
sort (4-5, 6-7) 2 4 5 7 1 3 2 6
sort (4-4, 5-5) 2 4 5 7 1 3 2 6
merge (4-4, 5-5) to 2 4 5 7 1 3 2 6
sort (6-6, 7-7) 2 4 5 7 1 3 2 6
merge (6-6, 7-7) to 2 4 5 7 1 3 2 6
merge (4-5, 6-7) to 2 4 5 7 1 2 3 6
merge (0-3, 4-7) to 1 2 2 3 4 5 6 7
56		return 0;


 * 
 * 
 * 
 * */
