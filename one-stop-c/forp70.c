#include <stdio.h>
int factorial(int n  )
{
        int result  = 1;
        int i;
        for(i =1; i <= n; ++i)
                result = result * i;
        return result;
}
// 6
int main()
{
        int result = factorial(3);
        printf("%d\n",result);
}
