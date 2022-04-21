//
//  randgame.c
//  randnumber
//
//  Created by yichuan on 2022/4/21.
//

#include "randgame.h"
/* 生成0-m个随机数**/
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
    printf("\r\n获取随机数并返回\r\n");
    int i,ran;
    int count;
    int sj[MAX];
    //返回生成的随机数数组
    int result[n];
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
            //printf("%d\r\n",ran);
            result[count]=ran;
            count++;
            sj[ran]--;
        }
    }
    //返回结果
    return result;
}
