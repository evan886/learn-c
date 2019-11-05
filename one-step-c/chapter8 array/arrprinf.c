#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	char gesture[3][10] = { "scissor", "stone", "cloth" };
	int man, computer, result, ret;

        int i,j;
        
        for (i =0;i<3;i++)
        {
                for (j =0; j<10; j++)
                {
                        printf("gesture[%d][%d] = %c\n",i,j,gesture[i][j]);
                        //                printf(" %c\n",g[i][j]);
                        
                }

        }
        return 0;

}
/*

gesture[0][0] = s
gesture[0][1] = c
gesture[0][2] = i
gesture[0][3] = s
gesture[0][4] = s
gesture[0][5] = o
gesture[0][6] = r
gesture[0][7] = 
gesture[0][8] = 
gesture[0][9] = 
gesture[1][0] = s
gesture[1][1] = t
gesture[1][2] = o
gesture[1][3] = n
gesture[1][4] = e
gesture[1][5] = 
gesture[1][6] = 
gesture[1][7] = 
gesture[1][8] = 
gesture[1][9] = 
gesture[2][0] = c
gesture[2][1] = l
gesture[2][2] = o
gesture[2][3] = t
gesture[2][4] = h
gesture[2][5] = 
gesture[2][6] = 
gesture[2][7] = 
gesture[2][8] = 
gesture[2][9] = 




*/
