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
