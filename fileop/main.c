//
//  main.c
//  fileop
//
//  Created by yichuan on 2022/4/20.
//

#include <stdio.h>
// 写文件
void writefile(void);
// 读文件
void readfile(void);
// 文件路径
#define filepath "/Users/yichuan/Documents/software examination/save/test.txt"
// 缓冲大小
#define buffsize 255
//
int main(int argc, const char * argv[]) {
    //writefile();
    readfile();
    return 0;
}
///
void readfile(){
    printf("读取文件\r\n");
    FILE *fp = NULL;
    char buff[buffsize];
    fp = fopen(filepath, "r");
    //fscanf(fp, "%s", buff);  //写入的时候和平常没有区别，还是只有字符串变量前不加‘&’，其他int、double等类型前都要加‘&’符号
    //printf("1: %s\n", buff );
    //
    //fgets(buff, 255, (FILE*)fp);  //scanf遇到空格就会断开，gets会读取空格，遇到换行就结束
    //printf("2: %s\n", buff );     //255是限制最大读取内容长度
    fgets(buff, buffsize, (FILE*)fp);
    printf("3: %s\n", buff );
    fclose(fp);
}
///
void writefile(){
    printf("写入文件\r\n");
    FILE *fp;
    //文件的绝对路径
    fp = fopen(filepath, "w+");
    //使用两个不同的函数写入两行
    fprintf(fp, "fprintf 函数写入测试...\n");
    //使用两个不同的函数写入两行
    fputs("fputs 函数写入测试...\n", fp);
    //关闭文件
    fclose(fp);
}
