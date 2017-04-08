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
	struct Books Book1; /* 声明 Book1，类型为 Book */
	struct Books Book2; /* 声明 Book2，类型为 Book */

	/* Book1 详述  字符串 复制 在 string.h  */
	strcpy(Book1.title, "C programming");
	strcpy(Book1.author, "evan huang");
	strcpy(Book1.subject, "c programming T utorial");
	Book1.book_id = 6495407;

	strcpy( Book2.title,"telecom billing");
	strcpy( Book2.author, "zara ali");
	strcpy( Book2.subject, "telecom billing turorial");
	Book2.book_id = 6495700;

	/* 输出 Book1 信息 */
	printf ("Book1 title: %s\n", Book1.title);
	printf("Book 1 author : %s\n", Book1.author);
	printf("Book 1 subject: %s\n", Book1.subject);
	printf("Book 1 book_id : %d\n", Book1.book_id);


	/* 输出 Book2 信息 */
	printf ("Book 2 title: %s\n", Book2.title);
	printf("Book 2 author : %s\n", Book2.author);
	printf("Book 2 subject: %s\n", Book2.subject);
	printf("Book 2  book_id : %d\n", Book2.book_id);



	
}

/*
C语言里面复制字符串的库函数, 函数声明包括在专门处理字符串的头文件<string.h>中:
char * strcpy( char * dst, const char * src );
这个函数把字符串src复制到一分配好的字符串空间dst中，复制的时候包括标志字符串结尾的空字符一起复制。操作成功，返回dst，否则返回NULL.
 * 
Book1 title: C programming
Book 1 author : evan huang
Book 1 subject: c programming T utorial
Book 1 book_id : 6495407
Book 2 title: telecom billing
Book 2 author : zara ali
Book 2 subject: telecom billing turorial
Book 2  book_id : 6495700


 * str1.c
 *
 * Copyright (C) 2017 - Unknown
 
 */
