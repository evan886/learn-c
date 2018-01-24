#include <stdio.h>
#define IN 1
#define OUT 0
/* count lines, words, and characters in input  行数、单词数与字符数*/
main()
{
  int c,  nl, nw , nc, state;
  state = OUT;
  nl = nw =  nc  = 0;
    /* 循环进行统计 */
  while ((c = getchar()) != EOF)
    {
        /* 统计字符 nc == no. characters  */
      ++ nc;
      if  ( c == '\n')
	++nl;
/* 它的初值是“不在单词中”
,即初值被赋为 OUT。我
们在这里使用了符号常量 IN 与 OUT,而没有使用其对应的数值 1 与 0*/

        /* 统计单词 */
      if ( c  == ' ' || c  == '\n'  || c  == '\t')
	state = OUT;
          /* here */
      else if (state == OUT )
	{
	  state = IN;
	  ++ nw  ;
	}
    }
    printf("%d %d %d\n", nl, nw, nc );
}
/*
 1).当读到的字符是\v即竖向跳格，基本是什么都不做，如果\v的前面有字符，则进入word_separatord的in_word 单词统计word加一，这很显然的，然后 break
2).当读到的字符是‘  ‘即空格时，这时，除了行位置linepos加一外，也进入了word_separatord进行判断，如果空格前有字符，则作为一个单词的结束，word++, 然后break;
3).当读到字符是\t 即横向跳格，也就是tab时，应该做的事情有
linepos的增加不是一个了，这里有个巧妙的计算方法，具体看代码，然后呢， 没有break ,本来应该走 ' '
空格继续判断的，但是此时已经不能在加一了，，所以 在代码中用到了   goto语句   直接从\t跳转到\v处 进行word是否加一的判断

 http://bbs.chinaunix.net/thread-2000903-1-1.html
 * */