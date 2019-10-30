#include <stdio.h>
int factorial(int n)
{
	int result = 1;
	while (n > 0) {
		result = result * n;
		n = n - 1;
	}
	return result;
}
int main(void)
{
	printf("faci is%d",factorial(3));
	return 0;
}


/* 没有stdio.h的话
ion-declaration]
   12 |  printf("faci is%d",factorial(3));
      |  ^~~~~~
fac.c:12:2: warning: incompatible implicit declaration of built-in function 'printf'
fac.c:1:1: note: include '<stdio.h>' or provide a declaration of 'printf'
  +++ |+#include <stdio.h>*/
