#include <stdio.h>
#include <math.h>
/*
gcc  -Wall  factorial.c 
factorial.c: In function ‘main’:
factorial.c:5:22: warning: implicit declaration of function ‘factorial’ [-Wimplicit-function-declaration]
         int result = factorial(3);
                      ^~~~~~~~~
int main(void)
{
        int result = factorial(3);
        printf("%d\n",result);
        } */

int factorial(int n)
{
        if (n == 0)
                return 1;
        else {
                 int recurse = factorial(n - 1);
                int result = n * recurse;
                return result;
        }

}

int main(void)
{
        int result = factorial(3);
        printf("%d\n",result);
}
