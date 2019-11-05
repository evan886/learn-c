#include <stdio.h>
void print_day (int day)
{
	char days[8][10] = {
               "", "Monday", "Tuesday",
			     "Wednesday", "Thursday", "Friday",
			     "Saturday", "Sunday"
    };
	if (day < 1 || day >7)
		     printf("Illegal day number!\n");
	printf("%s\n",days[day]);
}
int main(void)
{
        print_day(2);
        return 0;
        
}
/*
答案是 Tuesday  因为列数定了是10
days[2] === days[2][10]

解说 
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


 */
