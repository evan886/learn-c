#include <stdio.h>

/** count characters in input; 2nd version **/
main()
{
	double nc;
	for (nc=0; getchar() != EOF; ++nc);
	printf("%.0f\n", nc);
}

/*ab2 ctrl+d 得到　２*/


/*

main()
{
	printf("input char\n");
	 long nc ;
	 nc =0;
	 while  (getchar() != EOF)
		 ++nc;
	 printf("%ld\n",nc);
}
*/

/*
 input char
12 ctrl+d
3

 * */

/*
 #include<stdio.h>
 #include<string.h>
 void main()
 { char a[100]; int i= 0;
 printf("input string\n");
 gets(a);
 while(a[i] != '\0')  i++;
 printf("你输入的字符串的长度为%d\n",i);}
 * */
