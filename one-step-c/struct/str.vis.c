#include <stdio.h>
#include <string.h>
// 访问结构成员
struct Books
{
        char title[50];
        char author[50];
        char subject[100];
        int  book_id;
        
};
int main()
{
        struct Books Book1;
        struct Books Book2;

        strcpy( Book1.title,"c programing");
	 strcpy ( Book1.author, "nuha");
	 strcpy ( Book1.subject, "C progrep tutorial");
	Book1.book_id =  6495407;


	 /* 输出 Book1 信息 */
	printf ( "Book 1  title: %s\n", Book1.title);
        printf( "Book 1 author : %s\n", Book1.author);
   printf( "Book 1 subject : %s\n", Book1.subject);
   printf( "Book 1 book_id : %d\n", Book1.book_id);
   
}
/*
Book 1 title : C Programming
Book 1 author : Nuha Ali
Book 1 subject : C Programming Tutorial
Book 1 book_id : 6495407
Book 2 title : Telecom Billing
Book 2 author : Zara Ali
Book 2 subject : Telecom Billing Tutorial
Book 2 book_id : 6495700
 *
 */


