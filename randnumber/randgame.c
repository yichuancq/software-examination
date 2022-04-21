//
//  randgame.c
//  randnumber
//
//  Created by yichuan on 2022/4/21.
//

#include "randgame.h"
/* 生成0-m个随机数**/
//全局变量
int result[];
//
void genNumber(int m,int n){
    int i,ran;
    int count;
    int sj[MAX];
    for(i=0;i<=MAX-1;i++){
        sj[i]=1;
    }
    //计数器
    count=0;
    //生成随机种子
    srand( (unsigned)time( NULL ) );
    while (count<n) {
        ran=rand()%m+1;
        if(sj[ran]>0){
            printf("%d\r\n",ran);
            count++;
            sj[ran]--;
        }
    }
    
    return;
}
/*获取随机数并返回*/
int *genRandNumbers(int m,int n){
    //printf("\r\n获取随机数并返回\r\n");
    int i,ran;
    int count;
    int sj[MAX];
    //返回生成的随机数数组
 
    for(i=0;i<=MAX-1;i++){
        sj[i]=1;
    }
    //计数器
    count=0;
    //生成随机种子
    srand( (unsigned)time( NULL ) );
    while (count<n) {
//        srand( (unsigned)time( NULL ) );
        ////微秒级休眠函数
        //int a=rand()%10; //产生0~9的随机数,注意10会被整除
        //如果要规定上下限：
        //int a=rand()%51 + 13;//产生13~63的随机数
        ran=rand()%m+1;
        if(sj[ran]>0){
            //printf("%d\r\n",ran);
            result[count]=ran;
            count++;
            sj[ran]--;
        }
    }
    //返回结果
    return result;
}
/*save file*/
void savefile(char txt[1024]){
    //写入文件
    printf("写入文件\r\n");
    FILE *fp;
    //文件的绝对路径
    fp = fopen(filepath, "w+");
    fprintf(fp,"%s", txt);
    //使用两个不同的函数写入两行
    //fputs("fputs 函数写入测试...\n", fp);
    //关闭文件
    fclose(fp);
}
