#include <math.h>
#include <stdio.h>
int main(void)
{
        double pi = 3.1416;
        printf("sin(pi/2)=%f\nlnl=%f\n",sin(pi/2), log(1.0));

        return 0;
        
}
/*
evan@kalipc:~/github/learn-c/one-stop-c$ gcc -Wall p26.c -o  p26
/tmp/ccRt1xaE.o：在函数‘main’中：
p26.c:(.text+0x27)：对‘sin’未定义的引用
collect2: error: ld returned 1 exit status

记得加-lm

sin(pi/2)=1.000000
lnl=0.000000

*/
