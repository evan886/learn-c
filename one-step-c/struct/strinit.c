#include <stdio.h>
// 结构体变量的初始化
struct Books
{
        char title[50];
        char author[50];
        char subject[100];
        int book_id;
                
} book = { "c lang","RU","编辑",12345};


int main()
{
        printf("title: %s\nauthoor: %s\nsubject: %s\nbook_id: %d\n",book.title,book.author,book.subject,book.book_id);
        
}
/*

title: c lang
authoor: RU
subject: 编辑
book_id: 12345 
 *
 */
