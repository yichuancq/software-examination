//
//  main.c
//  switch
//
//  Created by yichuan on 2022/4/19.
//

//c99 导入bool 头文件
#include "stdbool.h"
// switch 函数
void function_switch(int i);

//if函数
void if_functoin(int i);

// while 函数
bool function_while(int i);

#include <stdio.h>
//
int main(int argc, const char * argv[]) {
    printf("输入1-7\r\n");
    // insert code here...
    bool flag=true;
    while (flag) {
        int i;
        printf("\r\n输入1-7，显示星期几：");
        scanf("%d",&i);
        //switch 函数
        //function_switch(i);
        //while 函数
         flag= function_while(i);
    }
    
    //
    return 0;
}
/* switch 函数**/
void function_switch(int i){
    if(i>=1 && i<=7){
        switch(i){
            case 1:
                printf("今天是星期一！");
                break;
            case 2:
                printf("今天是星期二！");
                break;
            case 3:
                printf("今天是星期三！");
                break;
            case 4:
                printf("今天是星期四！");
                break;
            case 5:
                printf("今天是星期五！");
                break;
            case 6:
                printf("今天是星期六！");
                break;
            case 7:
                printf("今天是星期日！");
                break;
        }
    }else{
        printf("输入不合法！");
        return;
    }
}
///
void if_functoin(int i){
    if(i==1){
        printf("今天是星期一！");
    }else if (i==2){
        printf("今天是星期二！");
    }
    else if (i==3){
        printf("今天是星期三！");
    }
    else if (i==4){
        printf("今天是星期四！");
    }
    else if (i==5){
        printf("今天是星期五！");
    }
    else if (i==6){
        printf("今天是星期六！");
    }else if (i==7){
        printf("今天是星期日！");
    }
}
///
bool function_while(int i){
    if(!(i>=1 && i<=7)){
        printf("输入不合法!");
        return false;
    }
    if_functoin(i);
    return true;
}
