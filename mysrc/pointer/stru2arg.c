#include <stdio.h>
#include <string.h>
struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id; 
};
/* 函数声明 */
void printBook( struct Books book);
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
	printBook (Book1 );
	/* 输出 Book2 信息 */
    printBook (Book2 );
	return 0; 
}
void printBook( struct Books book)
{
	printf ("Book title: %s\n", book.title);
	printf("Book  author : %s\n", book.author);
	printf("Book  subject: %s\n", book.subject);
	printf("Book  book_id : %d\n", book.book_id);

}


/*
 * stru2arg.c
Book title: C programming
Book  author : evan huang
Book  subject: c programming T utorial
Book  book_id : 6495407
Book title: telecom billing
Book  author : zara ali
Book  subject: telecom billing turorial
Book  book_id : 6495700


 * 
 * 
 * 
 * 
 * Copyright (C) 2017 - Unknown
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
