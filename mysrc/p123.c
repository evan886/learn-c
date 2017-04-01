
#include <stdio.h>
 void put_stars(int ch, int no)
 {
	 while (no-- >0)
		 putchar(ch);

 }

 int main(void)
 {
	  int i, ln;
	  printf("三角形有几层:"); scanf("%d",&ln);

	  for (i = 1; i <= ln; i++)
	  {
		  put_stars(' ', ln - i);
		  put_stars('*',i);

		  putchar('\n');
	  }
	  return (0);
 }

/*
   三角形有几层: 3
   *
  **
 ***

 */

