//
//  main.c
//  randnumber
//
//  Created by yichuan on 2022/4/21.
//

//#include <stdio.h>
//void fun(void);
#include "randgame.h"
#include "time.h"
# include <stdlib.h>
#include <string.h>
#define row 7
//
#define col n


//休眠调用
//#include "unistd.h"
int main(int argc, const char * argv[]) {
    //insert code here...
    //33->6
    //17->1
    int n;
    int count;
    printf("输入生成的号码组数n:");
    scanf("%d",&n);
    //生成文本字符串
    char txt[1024]={""};
    for(count=0;count<n;count++){
        printf("\t第%d组数据\r\n",count+1);
        sleep(1);
        //微秒级休眠函数
        //usleep(10000);
        //33选6
        int m1=33,n1=6;
        //17选1
        int m2=17,n2=1;
        int *redNumber=genRandNumbers(m1,n1);
        int *blueNumber=genRandNumbers(m2,n2);
      //  char str1[255] = "red ball";
        char line[255] = {""};
        //使用两个不同的函数写入两行
        for(int i=0;i<6;i++){
            /* 连接 str1 和 str2 */
            printf("\t%d",*(redNumber + i));
            char red[255];
            //数值转换字符串
            snprintf(red,255,"%4d",*(redNumber + i));
            //红球拼接
            strcat(line,red);
        }
        printf("\t +%d",*(blueNumber));
        char blue[255];
        snprintf(blue,255,"\t+%d\n",*(blueNumber));
        //篮球拼接
        strcat(line,blue);
        //红加蓝拼接形成一行
        strcat(txt,line);
        printf("\r\n");
    }
    savefile(txt);
    return 0;
}

//void fun(void){
//    int m,n;
//    printf("输入随机数的范围1 to m:");
//    scanf("%d",&m);
//    printf("输入获取随机数的个数 n(条件n<=m):");
//    scanf("%d",&n);
////    genNumber(m,n);
//    /*一个指向整数的指针 */
//    int *number;
//    int i;
//    number=genRandNumbers(m, n);
//    for(i=0;i<n;i++){
//        printf("number=%d\r\n",*(number + i));
//    }
//    return;
//}
