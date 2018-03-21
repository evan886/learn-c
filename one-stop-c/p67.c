#include <stdio.h>
int factorial(int n  )
{
        int result  = 1;
        while ( n  > 0)
        {
                result = result * n;
                n  =  n  - 1;
        }
        return result ;
}


int main()
{
        int result = factorial(3);
        printf("%d\n",result);
}
