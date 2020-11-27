#include "stdio.h"
int main()
{
    FILE *fp = NULL ; //定义一个 类型 FILE 指针 fp
    fp = fopen("/tmp/test","w+");
    fprintf(fp, " 2 this  is testing for fprintf...\n" );
    fputs("2 this is testing for fputs... \n",fp);
    fclose(fp);

}

/*
当上面的代码被编译和执行时，它会在 /tmp 目录中创建一个新的文件 test.txt，并使用两个不同的函数写入两行
 */
