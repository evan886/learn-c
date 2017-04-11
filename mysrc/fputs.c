#include <stdio.h>
main()
{
	FILE *fp;

	fp= fopen("/tmp/test.txt", "w+");
	fprintf (fp,"This is testing for fprintf ...\n");
	fputs("this is testing for fputs ...\n", fp);
	fclose(fp);


}
/*
 evan@evanpc:~/github/learn-c/mysrc$ cat /tmp/test.txt 
This is testing for fprintf ...
this is testing for fputs .
 */