#include<stdio.h>
int main(void)
{
char days[8][10] = {
               "", "Monday", "Tuesday",
                             "Wednesday", "Thursday", "Friday",
                             "Saturday", "Sunday"
    };

 int  i,j;
 for (i=0;i<8;i++)
   {
     for (j=0; j<10; j++)
       {
	 printf("days[%d][%d]=%c\n",i,j,days[i][j]);
       }
   }
}
/*
days[0][0]=
days[0][1]=
days[0][2]=
days[0][3]=
days[0][4]=
days[0][5]=
days[0][6]=
days[0][7]=
days[0][8]=
days[0][9]=
days[1][0]=M
days[1][1]=o
days[1][2]=n
days[1][3]=d
days[1][4]=a
days[1][5]=y
days[1][6]=
days[1][7]=
days[1][8]=
days[1][9]=
days[2][0]=T
days[2][1]=u
days[2][2]=e
days[2][3]=s
days[2][4]=d
days[2][5]=a
days[2][6]=y
days[2][7]=
days[2][8]=
days[2][9]=
days[3][0]=W
days[3][1]=e
days[3][2]=d
days[3][3]=n
days[3][4]=e
days[3][5]=s
days[3][6]=d
days[3][7]=a
days[3][8]=y
days[3][9]=
days[4][0]=T
days[4][1]=h
days[4][2]=u
days[4][3]=r
days[4][4]=s
days[4][5]=d
days[4][6]=a
days[4][7]=y
days[4][8]=
days[4][9]=
days[5][0]=F
days[5][1]=r
days[5][2]=i
days[5][3]=d
days[5][4]=a
days[5][5]=y
days[5][6]=
days[5][7]=
days[5][8]=
days[5][9]=
days[6][0]=S
days[6][1]=a
days[6][2]=t
days[6][3]=u
days[6][4]=r
days[6][5]=d
days[6][6]=a
days[6][7]=y
days[6][8]=
days[6][9]=
days[7][0]=S
days[7][1]=u
days[7][2]=n
days[7][3]=d
days[7][4]=a
days[7][5]=y
days[7][6]=
days[7][7]=
days[7][8]=
days[7][9]=

 */
