#include <stdio.h>
int is_prime(int n)
{
        int i;
        for (i  =2; i < n; i++)
                if (n % i == 0)
                        break;

        if (i == n)
                return 1;
        else
                return 0;
}

int main ()
{
        int i;
        for (i =1; i <= 100; i++)
        {
                if (!is_prime(i))
                        //如果不是素数
                        continue;
                printf("%d\n",i);
        }

        return 0;
}
/*
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97

*/

                

        

                
