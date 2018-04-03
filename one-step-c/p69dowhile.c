#include <stdio.h>
int factorial(int n  )
{
        int result  = 1;
        int i  =1;
        do 
        {
                result = result * i;
                i  =  i  + 1;
        }while (i <= n);
        return result ;
}


int main()
{
        int result = factorial(3);
        printf("%d\n",result);
}
