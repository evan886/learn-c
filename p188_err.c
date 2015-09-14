#include <stdio.h>
#define putsa(str) { putchar('\a'); puts(str);}

int main(void)
{
	int na;
	 printf("请输入一个整数;"); scanf("%d", &na);

	 if (na)
		 putsa("这个数不是 0");
	// if (na)
		// printf("故意改的 哈哈;");
	 else
		 putsa("这个数是 0");


	 return (0);
}

/*
 16:22:15 **** Incremental Build of configuration Debug for project cc ****
 make all
 Building file: ../00003.c
 Invoking: Cross GCC Compiler
 gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"00003.d" -MT"00003.d" -o "00003.o" "../00003.c"
 ../00003.c: In function ‘main’:
 ../00003.c:225:3: error: ‘else’ without a previous ‘if’
    else
    ^
 subdir.mk:27: recipe for target '00003.o' failed
 make: *** [00003.o] Error 1

 16:22:15 Build Finished (took 250ms)*/