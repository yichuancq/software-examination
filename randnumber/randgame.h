//
//  randgame.h
//  randnumber
//
//  Created by yichuan on 2022/4/21.
//

#ifndef randgame_h
#define randgame_h
#include "unistd.h"
#include <stdio.h>
//import 使用srand前
#include "stdlib.h"
//引入
#include "math.h"
//引入
#include "time.h"
//循环最大次数
#define MAX 200
/* 生成0-m个随机数*/
void genNumber(int m,int n);
/* 生成0-m个随机数 并返回int*/
int *genRandNumbers(int m,int n);
//save
void savefile(char txt[1024]);
// 文件路径
#define filepath "/Users/yichuan/Documents/software examination/save/test.txt"

#endif /* randgame_h */
