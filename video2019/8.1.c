#include<stdio.h> // at 10 video
#include<stdlib.h>
int main()
{
  int a[10];
  int i,j;
  int t;
  printf("排序前的数组:\n");
  for(i =0; i < 10; i++)
    {
      a[i]=rand() % 100 +1;
      printf("%4d",a[i]);
    }
  printf("\n排序后的数组:\n");
  for(i =0; i <9;i++)
    {
      for(j = i +1; j<10; j++)
	{
	  if (a[i] > a[j])
	    {
	      t = a[i];
	      a[i]=a[j];
	      a[j]=t;
	    }
	}
    }

for (i=0; i <10; i++)
  {
    printf("%4d",a[i]);
  }
return 0;
}
/*
排序前的数组:
  84  87  78  16  94  36  87  93  50  22
排序后的数组:
  16  22  36  50  78  84  87  87  93
 */
