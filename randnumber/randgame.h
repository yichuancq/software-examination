//
//  randgame.h
//  randnumber
//
//  Created by yichuan on 2022/4/21.
//

#ifndef randgame_h
#define randgame_h

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
//
#endif /* randgame_h */
