void increment(int x) 
{ 
x = x + 1; 
} 
 
int main(void) 
{ 
int i = 1, j = 2; 
printf("I now is %d \n ",increment(i) /* i now becomes 2 */ );

increment(j); /* j now becomes 3 */ 
return 0; 
} 
