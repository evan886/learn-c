#include<stdio.h>
/*  统计各个数字，空白符 以及和其它字符出现的次数  count digits, white space, others */
main()
{
  int c, i, nwhite, nother;
  int ndigit[10];
 
  nwhite = nother = 0;
  for (i = 0; i <  10; ++i)
    ndigit[i] = 0;

  //printf ("%d ", i); //10
  // printf ("%d ",  ndigit[i]); //2081060224
  while (( c =  getchar() ) != EOF)
    if ( c >= '0' && c <= '9')
      ++ndigit[c-'0'];
    else if ( c == ' ' || c == '\n' || c == '\t')
      ++ nwhite;
    else
      ++nother;

  printf("digits =");
  for ( i =0;  i < 10; ++i)
    printf("%d", ndigit[i]);
  printf(", while space = %d, other = %d\n",
     nwhite, nother);
}

/*　不知怎么运行这个呢
 当把这段程序本身作为输入时,输出结果为:
digits = 9 3 0 0 0 0 0 0 0 1, white space = 123, other = 345
 * */