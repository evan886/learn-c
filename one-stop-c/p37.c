#include <stdio.h>
#include <math.h>
//int x,i,j;
increment( int x)
{
        x = x + 1;
        return x;
}
int main()
{
        int i =1, j = 2;
        printf("i is %d \n",        increment(i));
        printf("j is %d",        increment(j));
        
//        increment(j);
        return 0;
        
        
}

