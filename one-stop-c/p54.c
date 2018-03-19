#include <math.h>
#include <stdio.h>
void print_logarithm(double x)
{
        if (x <= 0.0)
        {
                printf("Positive numbers only, please.\n");
                return ;
        }

        printf("the log of x  is  %f\n",log(x));
}
int main()
{
        print_logarithm(0.0);
        return 0;
}
