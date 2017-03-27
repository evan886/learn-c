#include <stdio.h>
#include <string.h>
struct Books
{
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};
int main()
{
  struct Books Book1;
  struct Books Book2;
  //
 strcpy( Book1.title,"c prigram");
 strcpy( Book1.author,"evan");
 strcpy( Book1.subject, "c program turo");
 Book1.book_id = 6495407;

/* Book2 详述 */

strcpy( Book2.title,"telecom prigram");
 strcpy( Book2.author,"lai2");
 strcpy( Book2.subject, "telecom  program turo");
 Book1.book_id = 6495404;


 printf( "Book 1 title : %s\n",Book1.title);
 printf( "Book 1 author : %s\n",Book1.author);
 printf( "Book 1 subject : %s\n",Book1.subject);
 printf( "Book 1 book_id : %d\n",Book1.book_id); // 记得是 %d  不是%s
 printf( "Book 2 title : %s\n",Book2.title);
 printf( "Book 2 author : %s\n",Book2.author);
 printf( "Book 2 subject : %s\n",Book2.subject);
 printf( "Book 1 book_id : %d\n",Book1.book_id);



 return 0;
 


 
 };
 


