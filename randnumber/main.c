//
//  main.c
//  randnumber
//
//  Created by yichuan on 2022/4/21.
//

#include <stdio.h>
//import 使用srand前
#include "stdlib.h"
//引入
#include "math.h"
//引入
#include "time.h"
//循环最大次数
#define MAX 200
/* 生成0-m个随机数**/
int main(int argc, const char * argv[]) {
    // insert code here...
    int i,n,m,ran;
    int count;
    int sj[MAX];
    for(i=0;i<=MAX-1;i++){
        sj[i]=1;
    }
    printf("输入随机数的范围1 to m:");
    scanf("%d",&m);
    printf("输入获取随机数的个数 n(条件n<=m):");
    scanf("%d",&n);
    //计数器
    count=0;
    //生成随机种子
    srand(time(0));
    //
    while (count<n) {
        ran=rand()%m+1;
        if(sj[ran]>0){
            printf("%d\r\n",ran);
            count++;
            sj[ran]--;
        }
    }
    return 0;
}
